#include<stdio.h>

int main(void){
  int in[10],i,n=0;

  while( EOF!=scanf("%d",&in[n]) ){
    if( ! in[n] ){
      printf("%d\n",in[--n]);
    }else
      n++;
  }

  return 0;
}