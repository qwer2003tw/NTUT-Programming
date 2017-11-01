#include<stdio.h>

int main(void)
{
    int n=0,m=0,amount=0;
    int l1d1=0,l1d2=0,l2d1=0,l2d2=0;

    scanf("%d",&n);
    while(n-->0)
    {
        amount=0;
        scanf("%d",&m);
        if(m>5000)
        {
            printf("E\n");
            continue;
        }
        scanf("%d %d",&l1d1,&l1d2);
        while(m-->1)
        {
            scanf("%d %d",&l2d1,&l2d2);
            if((l2d1>=l1d1&&l2d1<=l1d2))
            {
                if(l2d2>l1d2) l1d2=l2d2;
                else continue;
            }
            else
            {
                amount+=(l1d2-l1d1);
                l1d1=l2d1;
                l1d2=l2d2;
            }
        }
        amount+=(l1d2-l1d1);
        printf("%d\n",amount);
    }
}
