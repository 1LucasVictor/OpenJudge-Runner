#include<stdio.h>
int main()
{
     int A,B,s,m,n;
    scanf("%d%d",&A,&B);
    s=A+B;
    m=A-B;
    n=A*B;
    if(s>=m && s>=n)
        printf("%d\n",s);
    else if(m>=s && m>=n)
        printf("%d\n",m);
    else if(n>=s && n>=m)
        printf("%d\n",n);
    else if(A==0 && B==0)
        printf("%d\n",A);
    return 0;
}
