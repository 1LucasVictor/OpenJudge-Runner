#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define BUFSIZE 1000000

int N,K;
int  hoge[BUFSIZE]={0};
long long V,W,T;
int count = 0;
int main(void){
  int X,Y;
  scanf("%d %d",&X,&Y);
  if(X*4 < Y){
    printf("No");
    exit(0);
  }
  for(int i = 0;;i++){
    if(X*4-i*2 < X*2) break;
    if((X*4-i*2) == Y){
      printf("Yes");
      exit(0);
    }
  }
  printf("No");
  return 0;
}
