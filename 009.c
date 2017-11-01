#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    int a=0, b=0, c=0, amount=0;

    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a<=10) amount+=a*380;
    else if(a<=20) amount+=a*(380*0.9);
    else if(a<=30) amount+=a*(380*0.85);
    else amount+=a*(380*0.8);

    if(b<=10) amount+=b*1200;
    else if(b<=20) amount+=b*(1200*0.95);
    else if(b<=30) amount+=b*(1200*0.85);
    else amount+=b*(1200*0.8);

    if(c<=10) amount+=c*180;
    else if(c<=20) amount+=c*(180*0.85);
    else if(c<=30) amount+=c*(180*0.8);
    else amount+=c*(180*0.7);

    printf("%d\n",amount);

    return 0;
}
