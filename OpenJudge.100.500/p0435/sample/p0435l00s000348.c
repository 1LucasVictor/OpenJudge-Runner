#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
 int N,D,x,y,c=0;
 float a,b,X[2*(int)pow(10,5)],Y[2*(int)pow(10,5)];
  scanf("%d",&N);
  scanf("%d",&D);
  for(int n=0;n<N-1;n++){
    scanf("%d",&x);
    scanf("%d",&y);
    X[n]=x;
    Y[n]=y;
  }
  for(int n=0;n<N-1;n++){
    a=pow(X[n],2)+pow(Y[n],2);
    b=sqrt(a);
    if(b<=D){
      c++;
    }
  }
  printf("%d\n",c);
  return 0;
}