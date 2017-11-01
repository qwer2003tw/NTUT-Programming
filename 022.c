#include<stdio.h>

void paint1(int n);
void paint2(int n);

int main(void)
{
    int n=0,m=0;
    while(1)
    {
        scanf("%d",&m);
        if(m==-1)break;
        scanf(" %d",&n);
        if(m==1)
        {
            if(n<1||n>18)
            {
                printf("E\n");
                printf("\n");
                continue;
            }
            paint1((n+1)/2);
        }
        else if(m==2)
        {
            if(n<1||n>5)
            {
                printf("E\n");
                printf("\n");
                continue;
            }
            paint2(n);
        }
        else
        {
            printf("E\n");
            printf("\n");
            continue;
        }
    }


    return 0;
}

void paint1(int n)
{
    int i=1,j=1;
    for(i=1;i<=n;i++)
    {
        j=1;
        while(j++<=n-i) printf(".");
        j=1;
        while(j<=i) printf("%d",j++);
        j=i-1;
        while(j>=1) printf("%d",j--);
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        j=1;
        while(j++<=n-i) printf(".");
        j=1;
        while(j<=i) printf("%d",j++);
        j=i-1;
        while(j>=1) printf("%d",j--);
        printf("\n");
    }
    printf("\n");
}
void paint2(int n)
{
    int i=0,j=0;
    n=(2*n)-1;
    //printf("%d",n);

    for(i=n;i>=1;i-=2)
    {

        j=n;
        while(j>i)
        {
            printf(".");
            j-=2;
        }

        j=i;
        while(j>=1)
        {
            printf("%d",j);
            j-=2;
        }

        j=3;
        while(j<=i)
        {
            printf("%d",j);
            j+=2;
        }

        printf("\n");
    }
    printf("\n");

}
