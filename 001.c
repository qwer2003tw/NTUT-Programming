#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char name;
    int id=0;
    int a=0,b=0,c=0;
    scanf("%c\n%d\n%d\n%d\n%d",&name,&id,&a,&b,&c);
    printf("Name:%c\nID:%d\nAverage:%d\nTotal:%d\n",name,id,((a+b+c)/3),(a+b+c));
    return 0;
}
