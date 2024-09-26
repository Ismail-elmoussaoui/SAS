#include <stdio.h>

int main()
{
    float a;
    float b;
    float c;
    printf("entrer le nombre a :");
    scanf("%f",&a);
    printf("enter le nombre b:");
    scanf("%f",&a);
    printf("enter le nombre c:");
    scanf("%f",&c);
    float ab = a * 2;
    float ba = b * 3;
    float cb = c * 5;
    float tt =(a + b + c);

    printf("la moyenne ponderee est :%f",tt/10);
    return 0;
}
