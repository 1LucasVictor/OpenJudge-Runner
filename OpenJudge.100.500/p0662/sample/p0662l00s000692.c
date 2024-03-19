#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void){
   int A,B,C,D,ans;
   scanf("%d%d%d%d", &A,&B,&C,&D);
   if(D <= A) ans = 0;
   if(C <= A && A<=D) ans = D - A;
   if(A <= C && D <= B) ans = D -C;
   if(C <= B && B <= D) ans = B -C;
   if (B <= C) ans = 0;
   printf("%d\n",ans);
}