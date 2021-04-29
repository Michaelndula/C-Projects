#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,num,temp;

    printf("How many numbers do you wish to store in the array?:\n");
    scanf("%d",&num);

    int arr[num];

    printf("input your numbers:\n");
    for(i = 0; i < num; i++)
    {
        scanf("%d ",&arr[i]);
    }

    for(i = 0; i < num; i++){
        for(j = i + 1; j < num; j++){
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Ascending order of your numbers is\n");
    for(i = 0; i < num; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
