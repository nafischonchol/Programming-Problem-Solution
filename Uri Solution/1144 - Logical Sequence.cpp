#include<stdio.h>
int main()
{
    int n,i,x,ans,ans1,j;
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
                else{
                        ans1=i*ans;
                    printf("%d\n",ans1);
                }
            }
            printf("%d %d %d\n",i,ans+1,ans1+1);
    }
}
