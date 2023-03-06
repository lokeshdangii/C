#include<stdio.h>
int main()
{
    printf("-----Program for average marks------");

    int phy, chem, math, hindi, eng, avg ;
    

    printf("\nEnter marks of phy--");
    scanf("%d", &phy);

    printf("\nEnter marks of chem--");
    scanf("%d", &chem);

    printf("\nEnter marks of math--");
    scanf("%d", &math);

    printf("\nEnter marks of hindi--");
    scanf("%d", &hindi);

    printf("\nEnter marks of eng--");
    scanf("%d", &eng);
avg = (phy + chem + math + eng + hindi)/5 ;
    printf("Enter average marks--%d", avg);

    if ( avg >= 60)
    {
        printf("\n----Pass-----");
    }
    else
    {
        printf("\n----Fail---");
    }
    

    return 0;

    
}