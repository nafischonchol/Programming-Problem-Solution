#include<stdio.h>
int main()
{
    double A,B,C,tri,rec,cri,trap,sqr,pi=3.14159;
    scanf("%lf%lf%lf",&A,&B,&C);
    tri=.5*(A*C);
    cri=pi*C*C;
    trap=.5*(A+B)*C;
    sqr=B*B;
    rec=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tri,cri,trap,sqr,rec);

}
