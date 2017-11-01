#include<stdio.h>
#include<ctype.h>

void start(char a[1000]);
void stop(char a[1000]);
void invalid(char a[1000]);
void identifier(char a[1000]);
void build_id(char a[1000]);
void build_num(char a[1000]);
void build_invalid(char a[1000]);
void number(char a[1000]);
int index;
int main(void)
{
    char a[1000]="";
    gets(a);
    start(a);
    return 0;
    index=0;
}

void start(char a[1000])
{

    while(a[index]!='.')
    {
        if(a[index]==' ')
        {
            index++;
            start(a);
        }
        else if(isdigit(a[index]))
        {
            printf("%c",a[index++]);
            build_num(a);
        }
        else if(isalpha(a[index]))
        {
            printf("%c",a[index++]);
            build_id(a);
        }
    }

    if(a[index]=='.')
    {
        index++;
        stop(a);
    }
}
void stop(char a[1000])
{
    exit(0);
}
void build_id(char a[1000])
{
    if(a[index]==' ')
    {
        index++;
        identifier(a);
    }
    else if(isdigit(a[index]))
    {
        printf("%c",a[index++]);
        build_id(a);
    }

    else if(isalpha(a[index]))
    {
        printf("%c",a[index++]);
        build_id(a);
    }
    else if(a[index]=='_')
    {
        printf("%c",a[index++]);
        build_id(a);
    }
    else if(!isalpha(a[index])&&!isdigit(a[index]&&(a[index]!='_')))
    {
        printf("%c",a[index++]);
        build_invalid(a);
    }


}
void identifier(char a[1000])
{
    printf(" - Identifier\n");
}
void build_num(char a[1000])
{
    if(a[index]==' ')
    {
        index++;
        number(a);
    }
    else if(isdigit(a[index]))
    {
        printf("%c",a[index++]);
        build_num(a);
    }

    else if(!isdigit(a[index]))
    {
        printf("%c",a[index++]);
        build_invalid(a);
    }

}
void number(char a[1000])
{
    printf(" - Number\n");
    start(a);
}
void build_invalid(char a[1000])
{
    if(a[index]==' ')
    {
        index++;
        invalid(a);
    }
    else
    {
        printf("%c",a[index++]);
        build_invalid(a);
    }
}
void invalid(char a[1000])
{
    printf(" - Invalid\n");
}
