#include<stdio.h>
int main()
{

    int si, p, r, t;

  printf("the value of p is ---");
  scanf("%d", &p);

  printf("the value of r is ---");
  scanf("%d", &r);

  printf("the value of t is ---");
  scanf("%d", &t);
  
  
 si = (p*r*t)/100;

    printf("The simple interest is %d", si);

    return 0;
}