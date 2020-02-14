#include<stdio.h>
int main()
{
    int m,n,i;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&n);
        if(n==0)
            printf("NULL\n");
        else if(n<0)
        {
            if(n%2==0)
                printf("EVEN NEGATIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
        else
        {
           if(n%2==0)
                printf("EVEN POSITIVE\n");
            else
                printf("ODD POSITIVE\n");
        }
    }
    return 0;
}
