#include <stdio.h>
int main()
{
    int a,n,i,j,x,sum=0;
    scanf("%d",&a);
    while(1)
    {
        scanf("%d",&n);
        if(n>0)
            break;
    }
    for(i=a,x=1;x<=n;i++,x++)
    {
        sum=i+sum;

    }
    printf("%d\n",sum);
}
