#include<stdio.h>
int main()
{
int salary, dear, rent, grsal;

printf(" \n The salary is ----");
scanf("%d", &salary);

dear = salary * 40/100;
 
 printf("\n the dearness allowance is--%d", dear);

 rent = salary * 20/100;
  printf("\n the homerent is -- %d", rent);

  grsal = salary + (dear + rent);

   printf("\nthe gross salary is -- %d", grsal);

   return 0;



}