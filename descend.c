#include <stdio.h>

int main(int argc, char const *argv[])
{
    int size,i,j,temp;
    printf("Enter the size of the aary:\n");
    scanf("%d",&size);

    printf("Enter the elements of the array:\n");
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < size; i++){
        for(j = i + 1; j < size; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Descending order is:\n");
    for(i = 0; i < size; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
