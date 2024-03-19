#include<stdio.h>
#define MAX 44
int main(){
  int n,i;
  int y0,y1,y2;

  scanf("%d",&n);

  y1=1;
  y0=0;

  for(i = 1; i<=n ; i++){
    y2 = y1 + y0;
    y0 = y1;
    y1 = y2;
    if(i == n){
      printf("%d\n",y1);
    }
  }
  return 0;
}

