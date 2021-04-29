#include <stdio.h>

int main(int argc, char const *argv[])
{
    int size;
    /* Get the size of the array from user */
    printf("Enter the size of your array:\n");
    scanf("%d",&size);

    /*Get the Elements of the array from the user*/
    int arr[size];
    printf("Enter the Elements in your array:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    /*Check if the first element in array is less than the second element*/
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] < arr[j])
            {
                /*swap the elements*/
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    /*print in descending order after swapping*/
    printf("Your array in descending order is:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
/*thanks for watching*/
