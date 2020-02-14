#include<stdio.h>
int main()
{
    float i=0,j,x=0,sum;
    long int d=0,d1=0;
    while(i<2.1)
    {
        j=1;
        for(;j<=3;j++)
        {
            if(i>0 && i<1 || i>1 && i<2)
            {
                sum=i+j;
                printf("I=%.1f J=%.1f\n",i,sum);
            }
            else
            {
                d=i;
                d1=i+j;

                printf("I=%d J=%d\n",d,d1);
            }
        }
        i=i+0.2;
    }
}
