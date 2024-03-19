#include <stdio.h>

int main(void){
  int i,n;
  int mon;

  scanf("%d",&n);
  mon=100000;
  for(i=0;i<n;i++){
    mon *= 1.05;
    if(mon % 1000 != 0){
      mon /= 1000;
      mon *= 1000;
      mon += 1000;
    }
  }

  printf("%d\n",mon);

  return 0;
}