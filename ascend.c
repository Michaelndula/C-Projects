#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num,i,j,temp;
    /* ask user for the size of array */
    printf("enter the size of array:\n");
    scanf("%d",&num);

    /*Collect the elements of the array*/
    int arr[num];
    printf("Enter the numbers of the array:\n");
    for(i = 0; i < num; i++){
        scanf("%d",&arr[i]);
    }

    /*check if the first element is greater than the second element in the array*/
    for(i = 0; i < num; i++){
        for(j = i + 1; j < num; j++){
            if(arr[i] > arr[j]){
                /*swap the elements*/
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    /*print the elements after swapping*/
    printf("Your numbers in ascending order is:\n");
    for(i = 0; i < num; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
