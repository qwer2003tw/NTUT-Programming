#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    double amount=0, u=0, v=0, s=0;
    int input[5]={0};
    int i=0;

    scanf("%d %d %d %d %d", &input[0], &input[1], &input[2], &input[3], &input[4]);
    for(i=0;i<=4;i++) amount=amount+input[i];
    u=amount/5;
    for(i=0;i<=4;i++) v+=powf((input[i]-u),2);
    v=v/5;
    s=powf(v,0.5);
    printf("%.2f\n%.2f\n%.2f\n",v,s,u);
    return 0;
}
