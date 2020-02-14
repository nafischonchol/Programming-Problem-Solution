#include<stdio.h>
int main()
{
    double a,b,c,d,media=0;
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
            }while(media!=1);
            break;
        }
        else
            printf("nota invalida\n");
    }while(media!=1);
    media=(c+d)/2;
    printf("media = %.2lf\n",media);
    return 0;
}
