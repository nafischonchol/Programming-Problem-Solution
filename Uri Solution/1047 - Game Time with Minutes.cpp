#include<stdio.h>
int main ()
{
    int h1,m1,h2,m2,ans,h,m;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    if(h2>h1)
    {
        h=h2-h1;
        m=m2-m1;
        if(m<0)
        {
            m=m+60;
            h=h-1;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(h2<h1)
    {
        h=(h2-h1)+24;
        m=m2-m1;
        if(m<0)
        {
            m=m+60;
            h=h-1;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(h1==h2 && m2==m1)
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else if(h1==h2 && m1<m2)
    {
        h=h2-h1;
        m=m2-m1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(h2==h1 && m1>m2)
    {
        h=(h2-h1)+23;
        m=(m2-m1)+60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    return 0;
}
