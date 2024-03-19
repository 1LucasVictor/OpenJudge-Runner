#include <stdio.h>
#include <math.h>

int main(){
  int i,j,num;
  int judge=1;
  int count=0;

  scanf("%d",&num);
  int A[num];

  for(i=0; i<num; i++){
      scanf("%d",&A[i]);
    }

  for(i=0; i<num; i++){
    judge = 0;
    //printf("\n");
    if(A[i]==2) {
      judge=0;
    }

    else if(A[i]%2==0) judge=1;

    else if(A[i]%2!=0){
      for(j=3; j<sqrt(A[i]); j+=2){
        if(A[i]%j==0){
        judge = 1;
        break;
        }
      }
    }

    if(judge==0) count++;


  }
  printf("%d\n",count);
  return 0;
}

