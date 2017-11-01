#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    char ten[10]="X",twenty[10]="XX",thirty[10]="XXX",forty[10]="XL",fifty[10]="L",
    sixty[10]="LX",seventy[10]="LXX",eighty[10]="LXXX",ninety[10]="XC",hundred[100]="C",one[10]="I",
    two[10]="II",three[10]="III",four[10]="IV",five[10]="V",six[10]="VI",seven[10]="VII",
    eight[10]="VIII",nine[10]="IX";
    int in=0;
    scanf("%d",&in);
    switch(in/10)
    {
    case 1:
        printf("%s",ten);
        break;
    case 2:
        printf("%s",twenty);
        break;
    case 3:
        printf("%s",thirty);
        break;
    case 4:
        printf("%s",forty);
        break;
    case 5:
        printf("%s",fifty);
        break;
    case 6:
        printf("%s",sixty);
        break;
    case 7:
        printf("%s",seventy);
        break;
    case 8:
        printf("%s",eighty);
        break;
    case 9:
        printf("%s",ninety);
        break;
    case 10:
        printf("%s\n",hundred);
        break;
    }
    switch(in%10)
    {
    case 1:
        printf("%s",one);
        break;
    case 2:
        printf("%s",two);
        break;
    case 3:
        printf("%s",three);
        break;
    case 4:
        printf("%s",four);
        break;
    case 5:
        printf("%s",five);
        break;
    case 6:
        printf("%s",six);
        break;
    case 7:
        printf("%s",seven);
        break;
    case 8:
        printf("%s",eight);
        break;
    case 9:
        printf("%s",nine);
        break;
    }


}
