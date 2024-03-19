#include <stdio.h>
 
int main()
{
int A,B,K,x,y;
scanf("%d %d",&A,&B);
K=(A*A-B*B)/(2*A-2*B);
x=abs(A-K);
y=abs(B-K);
if(A!=B&&x==y){ printf("%d\n",K);}
else if(A==B||x!=y){printf("IMPOSSIBLE\n");}
return 0;
} 