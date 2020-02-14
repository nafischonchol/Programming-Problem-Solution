#include <stdio.h>

int main()
{
    int a[5],i,pos,neg,even,odd,d,count,b;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    count=0;
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
            count++;
    }
    printf("%d valor(es) par(es)\n",count);
    count=0;
    for(i=0;i<5;i++)
    {
        if(a[i]%2!=0)
            count++;
    }
    printf("%d valor(es) impar(es)\n",count);
    count=0;
    for(i=0;i<5;i++)
    {
        if(a[i]>0)
            count++;
    }
    printf("%d valor(es) positivo(s)\n",count);
    count=0;
    for(i=0;i<5;i++)
    {
        if(a[i]<0)
            count++;
    }
    printf("%d valor(es) negativo(s)\n",count);
    return 0;
}
