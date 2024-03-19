#include<stdio.h>
#include<math.h>
int main()
{
    int X,p1,p2,p3,p;
    scanf("%d",&X);
    p1 = pow(X,1);
    p2 = pow(X,2);
    p3 = pow(X,3);
    p = p1+p2+p3;
    printf("%d",p);
    return 0;
}
