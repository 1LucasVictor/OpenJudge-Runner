#include <stdio.h>
 
int main()
{
int A,B,x,y,K;
scanf("%d %d",&A,&B);
K=(A*A-B*B)/(2*A-2*B);
x=abs(A-K);
y=abs(B-K);
if(x==y){ printf("%d\n",K);}
else if(x!=y){ printf("IMPOSSIBLE\n");}
return 0;
}