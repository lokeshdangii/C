#include<stdio.h>
int main()
{
  
  int fahrenite, centigrade;

  printf("\n temperature of city in fahrenite is--");
  scanf("%d", & fahrenite);

  centigrade = ( fahrenite - 32) * 5/9;
  
  printf("temrature of city in centigrade is --%d", centigrade);

  return 0 ;
   

}