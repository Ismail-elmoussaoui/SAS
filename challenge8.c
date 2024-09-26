#include <stdio.h>

int main()
{
    float a,b,c;
    printf("enter le nombre a:");
    scanf("%f",&a);
    printf("entrer le nombe b:");
    scanf("%f",&b);
    printf("enter le nombre c:");
    scanf("%f",&c);

    float tt = a * b * c;
     tt = pow(tt,1/3);
     printf("moyenne geometrique est:");

     return 0;


}