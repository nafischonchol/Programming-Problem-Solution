#include<stdio.h>

int main()
{
    double n,i;
    int count=0;

    for(i=0;i<6;i++)
    {
        scanf("%lf",&n);
        if(n>0)
            count++;

    }
    printf("%d valores positivos\n",count);

}
