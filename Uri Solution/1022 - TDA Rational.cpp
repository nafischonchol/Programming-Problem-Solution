#include<stdio.h>
int main()
{
    int a1, a2, b1, b2, n, u, l, u1, l1, i, j, k;
    char x[2], x1[2];
    scanf("%d", &n);
    for (i=0; i<n; i++){
        scanf("%d%s%d%s%d%s%d", &a1, x, &b1, x1, &a2, x, &b2);
        switch(x1[0])
        {
        case '+':
            u = ((a1*b2)+(a2*b1));
            l = b1*b2;
            break;
        case '-':
            u = ((a1*b2)-(a2*b1));
            l = b1*b2;
            break;
        case '*':
            u = a1*a2;
            l = b1*b2;
            break;
        case '/':
            u = a1*b2;
            l = a2*b1;
            break;
        }
        k = u;
        if (k<0)
            k*=-1;
        for(j=k; j>0; j--){
            if(u%j==0&&l%j==0){
                u1 = u/j;
                l1 = l/j;
                printf("%d/%d = %d/%d\n", u, l, u1, l1);
                break;
            }
        }
    }
    return 0;
}
