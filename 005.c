#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double bmi=0,h=0,w=0;

    scanf("%lf\n%lf",&h,&w);
    //printf("%f %f",h,w);
    bmi = w / (h*h);
    printf("%.1f",bmi);

    return 0;
}
