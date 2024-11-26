#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[j]!=-999)
            {
                if(a[i]==a[j])
                {
                    a[j]=-999;
                    c++;
                }
            }
        }
    }
    printf("total number of occurence of duplicate elements :%d",c);
}


