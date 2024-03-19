#include<stdio.h>
#include<stdlib.h>

typedef long long ll;

int max(int a, int b){
  if(a > b) return a;
  else return b;
}
int min(int a, int b){
  if(a < b) return a;
  else return b;
}

int sort(const void *a ,const void *b){
  return *(int*)a - *(int*)b;
}


int main(){

  int x,y;
  scanf("%d %d",&x,&y);

  for(int i = 0; i <= x; ++i){
    if(i*2+(x-i)*4 == y){
        printf("Yes");
        return 0;
    }
  }
  printf("No");

  return 0;
}
