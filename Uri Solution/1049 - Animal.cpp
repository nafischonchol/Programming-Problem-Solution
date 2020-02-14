#include <stdio.h>
#include<string.h>
int main()
{
        char a1[15],a2[15],a3[15];
        int i;
        scanf("%s",a1);
        scanf("%s",a2);
        scanf("%s",a3);
        if(a1[0]=='v')
        {
            if(a2[0]=='a')
            {
                if(a3[0]=='c')
                    printf("aguia\n");
                else if(a3[0]=='o')
                    printf("pomba\n");
            }
            else if(a2[0]=='m')
            {
                if(a3[0]=='o')
                    printf("homem\n");
                else if(a3[0]=='h')
                    printf("vaca\n");
            }
        }
        else if(a1[0]=='i')
        {
            if(a2[0]=='i')
            {
                if(a3[2]=='m')
                    printf("pulga\n");
                else if(a3[2]=='r')
                    printf("lagarta\n");
            }
            else if(a2[0]=='a')
            {
                if(a3[0]=='o')
                    printf("minhoca\n");
                else if(a3[0]=='h')
                    printf("sanguessuga\n");
            }
        }
}
