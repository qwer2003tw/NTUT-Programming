#include<stdio.h>

void print(int data);

int main(void)
{
    int carry=0,data=0,backup_data=0,a=0;

    scanf("%d %d",&carry,&data);
    if(carry>16||carry<2||data>1000000000||data<0)
    {
        printf("E\n");
        return 0;
    }
    backup_data=data;
    while(carry*a<=backup_data)
    {
        data=backup_data;
        while(data/carry>=carry*a&&data/carry>=1){data/=carry;}
        a=data;
        //printf("data=%d,a=%d\n",data,a);
        if(data>=carry) data%=carry;
        print(data);
    }
    printf("\n");
    return 0;
}
void print(int data)
{
    if(data<10) printf("%d",data);
    else
    {
        switch(data)
        {
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        }
    }
}
