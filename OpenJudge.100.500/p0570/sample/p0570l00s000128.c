#include <stdio.h>
#include<stdlib.h> 
int main()
{
int A,B,K;
scanf("%d %d",&A,&B);
K=(A*A-B*B)/(2*A-2*B);
if(abs(A-K)==abs(B-K)){ printf("%d\n",K);}
else{ printf("IMPOSSIBLE\n");}
return 0;
} 