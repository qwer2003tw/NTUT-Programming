#include<stdio.h>

int reverse(int a);

int main(void)
{
    int a,b,i,f=0;
    scanf("%d %d",&a,&b);
    a=(a<10)?10:a;
    for(i=a;i<=b;i++)
    {
        if(i==reverse(i))
        {
            f++;
            printf("%d ",i);
        }
    }
    if(f==0) printf("0");
}
int reverse(int a)
{
    int i=0,n,j=1;
    while(j<a) j*=10;
    j/=10;
    while(a!=0)
    {
        i+=(a%10)*j;
        a/=10;
        j/=10;
    }
    return i;
}
