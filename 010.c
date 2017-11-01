#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    int input[5]={0};
    double a1=0, a2=0, a3=0;

    scanf("%d\n%d\n%d\n%d\n%d",&input[0],&input[1],&input[2],&input[3],&input[4]);

    a1=input[0]*0.08+input[1]*0.139+input[2]*0.135+input[3]*1.128+input[4]*1.483;
    a2=input[0]*0.07+input[1]*0.13+input[2]*0.121+input[3]*1.128+input[4]*1.483;
    a3=input[0]*0.06+input[1]*0.108+input[2]*0.101+input[3]*1.128+input[4]*1.483;

    if(a1<=183) printf("183\n183\n");
    else if(a2<=383&&a1<383) printf("%.0f\n183\n",a1);
    else if(a2<=383) printf("383\n383\n");
    else if(a3<=983&&a2<=983) printf("%.0f\n383\n",a2);
    else if(a3<983) printf("983\n983\n");
    else printf("%.0f\n983\n",a3);

    return 0;
}
