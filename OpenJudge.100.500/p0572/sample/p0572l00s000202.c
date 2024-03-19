#include <stdio.h>

int main(void){
   int L;
   int R;
   int N;
   int i;
   int j;
   int M;
     
     
   scanf("%d %d", &L, &R);
   if(R%2019==0||L%2019==0){
     i=0;
     printf("%d",i);
   }else if((R/2019)!=(L/2019)){
     i=0;
       printf("%d",i);
   }else{
     L=L%2019;
     R=R%2019;
     N=(L*L)%2019;
     M=2018;
     for(i=L;i<R;i++){
	 for(j=i+1;j<R+1;j++){
	   N=(i*j)%2019;
	 if(M>N){
	   M=N;
	 }
	 }
     }
     printf("%d",M);
   }
}
     
     