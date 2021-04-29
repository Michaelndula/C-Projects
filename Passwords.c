#include <stdio.h>

int main(){
    /*int Userpasswords[]= {1234, 2345,3456,4567,5678,6789,7890,9012,0123,1111},*/ 
    int flag=0,count=0,password;
    int sizeofarray,Array;

     /*Imagining it is company that has many employees, we ask them to enter the size of array for data input and storing it in a variable called sizeofarray*/
    printf("Enter size of the Array: ");
    scanf("%d", &sizeofarray);
    
    /*Then we initialize a Variable called Userpasswords and give it the size of the array*/
    int Userpasswords[sizeofarray];
     /*first we collect userpasswords by asking the users "imagining it is a company" to input their data i.e their passcodes so that it can be saved */
    printf("Enter Elements of the array: \n");
    for(Array = 0; Array <= sizeofarray; Array++)
    {
        /*Then we take the passcodes and store them in an array called Userpasswords*/
        scanf("%d", &Userpasswords[Array]);
    }

    do
    {
        /*After storing the Userpasswords now we ask the user to input their passcode which they stored earlier*/
        printf("Enter Pascode to open the door: ");
        scanf("%d",&password);/*Storing the data in a variable called password*/

       /*A loop that checks if the input matches any data from the listed in the array*/
        for(int i=0; i<sizeofarray; i++){
            if(Userpasswords[i]==password){
                /*if the passcode matches any in the array then open door*/
                printf("Authentication successful\n");

                /*then flag is raised to one*/
                flag=1;
                break;
            }
        }
        
        /*if flag is not raised that means the passcode did not match any in the array so*/
        if(flag==0)
        {
            /*we increment count because the code is already executed once and we are giving the user only 3 attempts that means now the user has two more attempts*/
           count++;
           {
               /*we minus the attempts */
               printf("Wrong pascode!!. try again %d attempts remaining\n", 3-count);
           }
        }
     }
    while (count > 0 && count < 3 && flag==0);

     /*if the flag is still not raised that means all the three attempts were wrong so the door will not be opened*/
    if (flag==0)
    {
        printf("!!Attempts over.Access Denied!!\n");
    }
    return 0;
}

