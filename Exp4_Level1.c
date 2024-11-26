#include<stdio.h>
int main()
{
 int n,i,j;
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<=n-1;i++)
 {
    
     for(j=i+1;j<=n-2;j++)
     {
          int temp=0;
         if(a[i]>a[j])
         {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
         }

     }
 }
     for(i=0;i<n;i++){
     printf("%d",a[i]);
     }
     return 0;
 
}




