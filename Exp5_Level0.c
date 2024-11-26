#include<stdio.h>
int main()
{
    char str1[50],str2[50];
    scanf("%s",str1);
    scanf("%s",str2);
    int l1=0,l2=0,i;
    while(str1[l1]!='\0')
    {
        str1[l1]=str1[l1];
        l1++;
        
        
    }
    l2=0;
    while(str2[l2]!='\0')
    {
        str1[l1]=str2[l2];
        l1++;
        l2++;
    }
    str1[l1]='\0';
    printf("con=%s",str1);
}




