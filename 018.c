#include <stdio.h>

int main(void)
{
    int row=0;
    double n0=0,n1=0,n2=0,n3=0;

    scanf("%d",&row);
    if(row<1||row>20) printf("E\n");
    while(row-->0)
    {
        scanf("%lf %lf %lf %lf",&n0,&n1,&n2,&n3);
        if(n1-n0==n2-n1&&n1-n0==n3-n2&&n2-n1==n3-n2)  printf("%.0lf %.0lf %.0lf %.0lf %.0lf\n",n0,n1,n2,n3,(2*n3-n2));
        else if(n1/n0==n2/n1&&n1/n0==n3/n2&&n2/n1==n3/n2) printf("%.0lf %.0lf %.0lf %.0lf %.0lf\n",n0,n1,n2,n3,n3*(n3/n2));
        else printf("E\n");
    }
}
