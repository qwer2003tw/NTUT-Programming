#include<stdio.h>
#include<math.h>

int isFactor(int n,int in);
int isPrime(int n);
int compute(int n);

int main(void)
{
    double n=0;
    int i=0,all=0;

    scanf("%lf",&n);

    if((int)n!=n||n<=0)
    {
        printf("E\n");
        return 0;
    }
    for(i=2;i<=n;i++)
    {
        if(isFactor(n,i)&&isPrime(i))
        {
            printf("%d ",compute(i));
            all+=compute(i);
        }
    }
    printf("\n%d\n",all);
    return 0;
}

int isFactor(int n,int in)
{
    return (n%in==0)?1:0;
}

int isPrime(int n)
{
    int i=0;

    for(i=2;i<=(n/2);i++) if(n%i==0) return 0;
    return 1;
}

int compute(int n)
{
    int i=0,a=1;

    for(i=1;i<=n;i++) a*=i;
    return a;
}
