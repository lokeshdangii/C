#include<stdio.h>
int main()
{
  int n;

  printf("Enter the value of n = ");
  scanf("%d", &n);

 

  if( n%2 == 0)
  {
   printf("even"); 
  }
  else
  {
      printf("odd");
  }
 
  return 0;
}