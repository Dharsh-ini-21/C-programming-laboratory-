#include<stdio.h>
int main()
{
    char a[30];
    int c=0,i=0,d=0,f=0,z=0;
    scanf("%s",a);
    while(a[i]!='\0')
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            c++;
            i++;
        }
        else if(a[i]>='A'&&a[i]<='Z')
        {
            z++;
            i++;
        }
       else if(a[i]>='0'&&a[i]<='9')
        {
            d++;
            i++;
        }
        else
        {
            f++;
            i++;
        }
    }
    printf("lowecase alphabets :%d\n",c);
    printf("uppercase alphabets :%d\n",z);
    printf("digits :%d\n",d);
    printf("special characters :%d\n",f);
    return 0;
}

    
   

    
