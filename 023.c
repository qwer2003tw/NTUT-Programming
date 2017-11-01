#include<stdio.h>

int main(void)
{
    int a,b,c,d=0;
    int a1,b1,c1,d1=0;
    int ba,bb,bc,bd=0;
    int a_c=0,b_c=0;

    scanf("%d %d %d %d",&a,&b,&c,&d);
    ba=a;
    bb=b;
    bc=c;
    bd=d;
    while(1)
    {
        a=ba;
        b=bb;
        c=bc;
        d=bd;
        a_c=0;
        b_c=0;
        scanf("%d",&a1);
        if(a1==-1) break;
        scanf(" %d %d %d",&b1,&c1,&d1);
        if(a==a1)
        {
            a_c++;
            a=-1;
            a1=-2;
        }

        if(b==b1)
        {
            a_c++;
            b=-1;
            b1=-2;
        }

        if(c==c1)
        {
            a_c++;
            c=-1;
            c1=-2;
        }

        if(d==d1)
        {
            a_c++;
            d=-1;
            d1=-2;
        }

        if(a1==a||a1==b||a1==c||a1==d) b_c++;
        if(b1==a||b1==b||b1==c||b1==d) b_c++;
        if(c1==a||c1==b||c1==c||c1==d) b_c++;
        if(d1==a||d1==b||d1==c||d1==d) b_c++;

        printf("%dA%dB\n",a_c,b_c);
    }
    return 0;
}
