#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
  long N,D,x,y,ab,c=0,X[2*(int)pow(10,5)],Y[2*(int)pow(10,5)];
  scanf("%ld",&N);
  scanf("%ld",&D);
  for(int n=0;n<N-1;n++){
    scanf("%ld",&x);
    scanf("%ld",&y);
    X[n]=x;
    Y[n]=y;
    if(sqrt(pow(X[n],2)+pow(Y[n],2))<=D){
      c++;
    }
  }
  printf("%d\n",c);
return 0;
}