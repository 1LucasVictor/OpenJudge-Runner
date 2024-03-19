#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
  long N,D,x,y;
  int count=0,X[2*(int)pow(10,5)],Y[2*(int)pow(10,5)];
  scanf("%ld",&N);
  scanf("%ld",&D);
  for(int n=0;n<N;n++){
    scanf("%ld",&x);
    scanf("%ld",&y);
    X[n]=x;
    Y[n]=y;
    if(sqrtf(powf(X[n],2)+powf(Y[n],2))<=D){
      count++;
    }
  }
  printf("%d\n",count);
return 0;
}