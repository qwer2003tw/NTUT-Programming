#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct _time
{
    int mm;
    int hh;
    int error;
}time;

int cal_cost(int t);

int main(void)
{
    time t[6];
    int hh=0,mm=0,i=0;
    int t_time[3]={0};

    for(i=0;i<6;i++) t[i].error=0;
    for(i=0;i<6;i++) scanf("%d:%d",&t[i].hh,&t[i].mm);
    for(i=0;i<6;i++)
    {
        if(t[i].hh>24||t[i].hh<0) t[i].error=1;
        if(t[i].mm>60||t[i].mm<0) t[i].error=1;
    }
    for(i=0;i<3;i++)
    {
        if(t[2*i+1].error==1||t[2*i].error==1) continue;
        t_time[i]=60*(t[2*i+1].hh-t[2*i].hh)+(t[2*i+1].mm-t[2*i].mm);
    }
    for(i=0;i<3;i++)
    {
        if(t[2*i+1].error==1||t[2*i].error==1) printf("error\n");
        else printf("%d\n",cal_cost(t_time[i]));
    }

    return 0;
}
int cal_cost(int t)
{
    int cost=(t<30)?0:((t<120)?floor(t/30.0)*30:((t<240)?ceil((t-120)/30.0)*40+120:ceil((t-240)/30.0)*60+280));
    return cost;
}
