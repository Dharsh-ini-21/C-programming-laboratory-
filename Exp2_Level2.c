#include<stdio.h>
int main()
{
    int bs;
    float hra,da,gross;
    scanf("%d",&bs);
    if(bs<=10000 && bs>0)
    {
        hra=bs*20/100;
        da=bs*80/100;
        gross=bs+hra+da;
        printf("%.0f",gross);
    }
    else if(bs>0 && bs<=20000)
    {
        hra=bs*25/100;
        da=bs*90/100;
        gross=bs+hra+da;
        printf("%.0f",gross);
    }
    else if(bs>0 && bs>20000)
    {
        hra=bs*30/100;
        da=bs*95/100;
        gross=bs+hra+da;
        printf("%.0f",gross);
    }
    return 0;
}




