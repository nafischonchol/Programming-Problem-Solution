#include<stdio.h>
int main()
{
    double a,b,c,d,avg;
    int media=1,option;
    do
    {
        do
        {
            scanf("%lf",&a);
            if(a>=0 && a<=10)
            {
                c=a;
                do
                {
                    scanf("%lf",&b);
                    if(b>=0 && b<=10)
                    {
                        d=b;
                        break;
                    }
                    else
                        printf("nota invalida\n");
                }while(media!=0);
                break;
            }
            else
                printf("nota invalida\n");
        }while(media!=0);
        avg=(c+d)/2;
        printf("media = %.2lf\n",avg);
        printf("novo calculo (1-sim 2-nao)\n");
        do
        {
            scanf("%d",&option);
            if(option!=1 && option !=2)
            {
                printf("novo calculo (1-sim 2-nao)\n");
            }
        }while(option!=1 && option !=2);
    }while(option!=2);
    return 0;
}
