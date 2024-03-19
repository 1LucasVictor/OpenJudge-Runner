#include<stdio.h>
#define MAX 44


int main(){
  int i,n,f0=0,f1,f2;

  scanf("%d",&n);

  f1=1;

  for(i=1;i<MAX+1;i++){
    f2=f1+f0;
    f0=f1;
    f1=f2;

    if(i==n){
      printf("%d\n",f1);
      break;
    }
  }

  return 0;
}

