#include <stdio.h>

int main(){
    float tp;
    printf("enter la tp en cls :");
    scanf("%f",&tp);

    if (tp< 0){
            printf("%f cls,leau est a letat solide.\n",tp);
    }else if (tp>= 0 && tp < 100){
        printf("%f cls, leau est a letat liquid.\n",tp);
    }else {
            printf("%f cls, leau est a letat gaz.\n",tp);
    }



      return 0;




}
