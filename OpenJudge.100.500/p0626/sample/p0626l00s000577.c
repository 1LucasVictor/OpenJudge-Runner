#include <stdio.h>

int main(){
  int d,n;
  scanf("%d %d",&d,&n);
  if(n == 100)n==101;
  switch(d){
    case 0:
      printf("%d\n",n);
      break;
    case 1:
      printf("%d\n",n*100);
      break;
    case 2:
      printf("%d\n",n*10000);
      break;
  }
  return 0;
}
