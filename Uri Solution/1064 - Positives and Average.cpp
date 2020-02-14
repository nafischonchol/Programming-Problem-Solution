#include<stdio.h>
int main()
{
    double n,i,sum=0.0;
    int count=0;

    for(i=0;i<6;i++)
    {
        scanf("%lf",&n);
        if(n>0){
            sum=sum+n;
            count++;
        }

    }
    printf("%d valores positivos\n",count);
    sum=sum/count;
    printf("%.1lf\n",sum);

}
