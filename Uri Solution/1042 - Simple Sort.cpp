#include<stdio.h>
int main()
{
   int a,b,c,n;
   scanf("%d%d%d",&a,&b,&c);
   if(a<b && a<c)
   {
       printf("%d\n",a);
       if(b<c)
        printf("%d\n%d\n",b,c);
       else if(c<b)
        printf("%d\n%d\n",c,b);

   }
    else if(b<a && b<c)
   {
       printf("%d\n",b);
       if(a<c)
        printf("%d\n%d\n",a,c);
       else if(c<a)
        printf("%d\n%d\n",c,a);

   }
    else
   {
       printf("%d\n",c);
       if(b<a)
        printf("%d\n%d\n",b,a);
       else if(a<b)
        printf("%d\n%d\n",a,b);

   }
   printf("\n");
   printf("%d\n%d\n%d\n",a,b,c);

}
