#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tp;
    printf("enter la temperateur");
    scanf("%f",&tp);
    if (tp>=38){
        printf("vous avez de la fivier");
    }
    else {
        printf("temperateur est normal");
    }
    return 0;
}