#include<stdio.h>
int main()
{
    int a,A,b,B,c;
    scanf("%d",&a);
    A=a%10;
    b=a/10;
    B=b%10;
    c=b/10;
    if(A==7||B==7||c==7)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;

}
