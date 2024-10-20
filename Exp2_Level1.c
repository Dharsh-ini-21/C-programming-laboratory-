#include<stdio.h>
int main()
{
    char sta;
    char gen;
    int age;
    scanf(" %c\n",&sta);
    scanf(" %c\n",&gen);
    scanf("%d",&age);
    if(age>30 && gen=='M')
    {
        printf("insured");
    }
    else if(age>25 && gen=='F' && sta=='u')
    {
        printf("insured");
    }
    else if(age<0)
    {
        printf("enter positive age");
    }
    else if(gen!='F' && gen!='M')
    {
        printf("invalid gender");
    }
    else if(sta!='u' && sta!='m')
    {
        printf("invalid status");
    }
    else
    {
        printf("not insured");
    }
    return 0;
}


