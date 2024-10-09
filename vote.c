# include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if(age>=18 && age<=68)
    {
        printf("eligible to vote");
    }
    else if(age<18 && age>0)
    {
        printf("not eligible to vote");
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
