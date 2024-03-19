#include<stdio.h>


int main(void){

  int train[30];
  int count=0;
  int n;

  while(scanf("%d", &n)!=EOF){
    if(n==0){
      printf("%d\n", train[--count]);
    }
    else{
      train[count++]=n;
    }
  }

  return(0);
}

