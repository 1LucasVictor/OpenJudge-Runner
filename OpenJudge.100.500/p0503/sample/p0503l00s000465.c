#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(void){
   int i,j,N;
   int A[200000];
   int swi=0;
   
   scanf("%d",&N);
   
   for(i=0;i<N;i++){
   scanf("%d",&A[i]);
 for(j=0;j<i;j++){
 if(A[j]==A[i])
 swi=1;
   }
   }
   
 if(swi==0)
   printf("YES\n");
   else
   printf("NO\n");
    return 0;
}
