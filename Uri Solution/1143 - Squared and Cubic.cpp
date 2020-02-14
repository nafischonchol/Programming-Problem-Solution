#include<stdio.h>
int main()
{
    int n,i,x,ans,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
        x=1;
        for(j=i;x<=2;x++)
        {
            if(x==1)
            {
                ans=i*i;
                printf("%d ",ans);
            }
            else
                printf("%d\n",i*ans);
        }
    }
}
