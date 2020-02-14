#include<stdio.h>
int main()
{
    int n,i,j,a,b,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        sum=0;
        if(a<=b)
         {
            for(j=a+1;j<b;j++)
            {

                if(j%2!=0)
                {
                    sum=sum+j;

                }
            }
         }
         else{
            for(j=b+1;j<a;j++)
            {

                if(j%2!=0)
                {
                    sum=sum+j;

                }
            }
         }
        printf("%d\n",sum);
    }
}
