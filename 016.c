#include<stdio.h>

int main(void)
{
    int m=0;
    double totally=0,ly=0,ty=0;
    scanf("%d\n%lf\n%lf",&m,&ly,&ty);
    totally=(ty<=120)?(ty*((m<=9&&m>=7)?2.1:2.1)-((ty<ly)?(ly-ty)*0.6:0)):
        (ty<=330)?(ty*((m<=9&&m>=7)?3.02:2.68)-((ty<ly)?(ly-ty)*0.6:0)):
            (ty<=500)?(ty*((m<=9&&m>=7)?4.39:3.61)-((ty<ly)?(ly-ty)*0.6:0)):
                (ty<=700)?(ty*((m<=9&&m>=7)?4.97:4.01)-((ty<ly)?(ly-ty)*0.6:0)):
                    (ty*((m<=9&&m>=7)?5.63:4.50)-((ty<ly)?(ly-ty)*0.6:0));
    printf("%.2lf\n",totally);
}
