#include<stdio.h>
int main(void){
  int i;
  char A[100];
  for(i=0;;i++){
    if(scanf("%c ",&A[i])==EOF)break;

   if(A[i]=='+'){
      i=i-2;
      if(A[i]>48){
	A[i]=A[i]-48;
      }
       if(A[i+1]>48){
	A[i+1]=A[i+1]-48;
      }
     
      A[i]=A[i]+A[i+1];


   }
    if(A[i]=='-'){
      i=i-2;
      if(A[i]>48){
	A[i]=A[i]-48;
      }
       if(A[i+1]>48){
	A[i+1]=A[i+1]-48;
      }
          A[i]=A[i]-A[i+1];


    }
    if(A[i]=='*'){
      i=i-2;
       if(A[i]>48){
	A[i]=A[i]-48;
      }
       if(A[i+1]>48){
	A[i+1]=A[i+1]-48;
      }
  
      A[i]=A[i]*A[i+1];



   }
  }


  printf("%d\n",A[i-1]);
  return 0;
}