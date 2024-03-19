#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d%d",&A,&B);
    int a,b;
    a = B/A;
    if(A%B==0)printf("%d\n",a);
    else printf("%d\n",a+1);
    return 0;
}
