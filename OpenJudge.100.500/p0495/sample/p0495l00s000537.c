#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){

  char N[3];

  scanf("%s",N);

  /*
  int A[N];
  int i;
  for(i=0;i<N;i++){
   scanf("%d",&A[i]);
   }
  */
 if(N[0] == N[1] && N[1] == N[2] && N[0] == N[2]){
   printf("No");
 }
 else{
   printf("Yes");
 }








 return(0);
 }
