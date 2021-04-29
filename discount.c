#include <stdio.h>
#include <math.h>

void main(){

float price;

float discounted_percentage;

float discount_amount;

float discounted_price;

printf ("program to calculate discounted amount: ");

printf ("\n\n Enter price of item :");

scanf("%f",&price);

 

printf ("Enter discount percentage of item : ");
scanf("%f",&discounted_percentage);

printf ("\n\n Enter discounted price of item :");



discount_amount= (discounted_percentage * price)/100 ;

discounted_price =(price- discount_amount);

 

printf ("\n\ndiscount amount : %f \n\n" ,discount_amount);

 printf ("Discounted price : %f \n\n" ,discounted_price );

 



 

 }