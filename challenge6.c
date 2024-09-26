#include <stdio.h>

int main()
{
    float a,b;
    printf("enter le nomrbre (a)");
    scanf("%f",&a);
    printf("entrer le nombre (b)");
    scanf("%f",&b);

    printf("a + b = %.2f\n",a + b);
    printf("a * b = %.2f\n",a *b);
    printf("a - b = %.2f\n",a - b);
    printf("a / b = %.2f\n", a / b);

    return 0;
}
