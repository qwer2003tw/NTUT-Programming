#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    int a=0, b=0, c=0;
    scanf("%d %d %d", &a, &b, &c);
    if(a<=0||b<=0||c<=0||((a+b)<=c)||((a+c<=b))||((b+c)<=a)) printf("not triangle\n");
    else if(a==b&&b==c) printf("equilateral triangle\n");
    else if(a==b||b==c||a==c) printf("isosceles triangle\n");
    else printf("triangle\n");
    return 0;
}
