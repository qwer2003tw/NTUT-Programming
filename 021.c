#include<stdio.h>

void paint1(int n);
void paint2(int n);
void paint3(int n);

int main(void)
{
    int n=0,m=0;
    scanf("%d",&m);
    scanf("%d",&n);
    if(m==1) paint1((n+1)/2);
    else if(m==2) paint2((n+1)/2);
    else paint3((n+1)/2);
    return 0;
}
void paint1(int n)
{
    int i=1,j=1;
    for(i=1;i<=n;i++)
    {
        j=1;
        while(j++<=i) printf("*");
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        j=1;
        while(j++<=i) printf("*");
        printf("\n");
    }
}
void paint2(int n)
{
    int i=1,j=1;
    for(i=1;i<=n;i++)
    {
        j=1;
        while(j++<=n-i) printf(".");
        j=1;
        while(j++<=i) printf("*");
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        j=1;
        while(j++<=n-i) printf(".");
        j=1;
        while(j++<=i) printf("*");
        printf("\n");
    }
}
void paint3(int n)
{
    int i=1,j=1;
    for(i=1;i<=n;i++)
    {
        j=1;
        while(j++<=n-i) printf(".");
        j=1;
        while(j++<=i) printf("*");
        j=1;
        while(j++<i) printf("*");
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        j=1;
        while(j++<=n-i) printf(".");
        j=1;
        while(j++<=i) printf("*");
        j=1;
        while(j++<i) printf("*");
        printf("\n");
    }
}
