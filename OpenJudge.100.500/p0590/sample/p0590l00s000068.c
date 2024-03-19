#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#define LL long long
#define INF 1<<31-1
#define LLINF 1<<63-1
#define MIN(x,y) ((x)<(y)?(x):(y))
#define MAX(x,y) ((x)<(y)?(y):(x))
#define MOD 1000000007
void swap(int* x,int* y){
  int tmp=*x;*x=*y;*y=tmp;
}

int main(){
  int a,b,c,d,e,k;
  scanf("%d%d%d",&a,&b,&c);
  scanf("%d%d%d",&d,&e,&k);
  if(e-a>k)printf(":(\n");
  else printf("Yay!\n");

  //printf("%d\n",ans);
  return 0;
}
