#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    int num1=0, num2=0;

    scanf("%d\n%d",&num1, &num2);
    printf("Difference:%.2f\n",fabs(num1-num2));
    printf("Sum:%.2f\n",(double)(num1+num2));
    printf("Quotient:%.2f\n",(double)num1/(double)num2);
    printf("Product:%.2f\n",(double)(num1*num2));
    return 0;
}
