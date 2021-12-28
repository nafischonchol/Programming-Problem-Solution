#include<stdio.h>
#include<string.h>
 
int main()
{
    char m[]={"heidi"},s[1012];
    int i,j=0,l,c=0;
 
    gets(s);
    l=strlen(s);
 
    for(i=0;i<l;i++)
    {
        if(s[i]==m[j])
        {
            c++;
            j++;
            if(c==5)
                break;
        }
 
    }
    if(c==5)
        printf("YES\n");
    else
        printf("NO\n");
}
