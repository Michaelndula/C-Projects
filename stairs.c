#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* my variables */
    int Rows, columns, Noofrows;

    printf("Enter the number of Rows to be printed:'\n");
    printf("The number of rows should be a max of 20\n");
    scanf("%d",&Noofrows);

 while (Noofrows > 0 || Noofrows < 20)
 {
     printf("%d Rows it is:\n",Noofrows);
     break;
 }
 
   
    
    

    for(Rows = 1; Rows <= Noofrows; Rows++){
        for(columns = 1; columns <= Rows; columns++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
