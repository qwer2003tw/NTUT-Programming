#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    int a=0, b=0, c=0;
    double t=0, x1=0, x2=0, x11=0, x12=0, x21=0, x22=0;

    scanf("%d\n%d\n%d",&a,&b,&c);

    t=sqrt(b*b-4.0*a*c);
    if(t>=0)
    {
        x1 = (-b+t)/(2.0*a);
        x2 = (-b-t)/(2.0*a);

        printf("%.1f\n%.1f\n",x1,x2);
    }
    else
    {
        t=sqrt(-(b*b-4.0*a*c));
        x11 = -b/(2.0*a);
        x21 = -b/(2.0*a);
        x12=fabs((-t)/(2.0*a));
        x22=x12;

        printf("%.1f+%.1fi\n",x11, x12);
        printf("%.1f-%.1fi",x21, x22);
    }

    return 0;
}
