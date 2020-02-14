#include<stdio.h>
int main()
{
    int sh,eh,th;
    scanf("%d%d",&sh,&eh);
    th=eh-sh;
    if(th<0)
     {
         th=th+24;
         printf("O JOGO DUROU %d HORA(S)\n",th);
     }
     else if(th>0)
        printf("O JOGO DUROU %d HORA(S)\n",th);
     else if(th==0)
        printf("O JOGO DUROU 24 HORA(S)\n",th);
      return 0
}
