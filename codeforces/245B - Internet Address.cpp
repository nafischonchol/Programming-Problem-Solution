#include<stdio.h>
#include<string.h>
 
int main()
{
    char s[57],ch[12];
    int i,l,p;
    gets(s);
    l=strlen(s);
    if(s[0]=='h')
    {
        strcpy(ch,"http://");
        i=4;
    }
    else
    {
        strcpy(ch,"ftp://");
        i=3;
    }
    printf("%s",ch);
    p=i;
    for(; i<l; i++)
    {
        if(s[p]=='r')
            p=0;
        else if(s[i]==114 && s[i+1]==117)
            break;
       printf("%c",s[i]);
    }
 
    printf(".ru");
    if(l-1>i+1)
    {
        printf("/");
        for(i=i+2;i<l;i++)
        {
            printf("%c",s[i]);
 
        }
    }
    printf("\n");
    return 0;
}
