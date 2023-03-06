#include<stdio.h>
int main(){

    float km, met, fe, inc,cm;

    printf("Enter the distance in Kilometer=");
    scanf("%f", &km);

    met = km * 1000;
    fe = met * 3.37;
    inc = fe * 12;
    cm = inc * 2.54;

    printf("\n Distance in Kilometer = %f", km);
    printf("\n Distance in meter = %f",    met);
    printf("\n Distance in feet = %f",      fe);
    printf("\n Distance in inch = %f",     inc);
    printf("\n Distance in centimeter = %f",cm);

    return 0;
}