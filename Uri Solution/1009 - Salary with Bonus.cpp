#include<stdio.h>
int main()
{
    char n;
    double s,v,t;
    scanf("%s%lf%lf",&n,&s,&v);
    t=s+v*.15;
    printf("TOTAL = R$ %.2lf\n",t);
}
