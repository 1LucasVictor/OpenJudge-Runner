#include <stdio.h>

int main(void){
   int N;
   int A;
   int B;
     
   scanf("%d %d %d",&N, &A, &B);
   if(N*A>B){
     printf("%d",B);
   }
     else{
       printf("%d\n",N*A);
	 }
}
