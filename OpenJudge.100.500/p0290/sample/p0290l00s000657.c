#include <stdio.h>

int main () {
  int num,x,count=0,i,j;

  scanf("%d",&num);

  for(i=0;i<num;i++) {
    scanf("%d",&x);
    for(j=2;j<x;j++) {
      if(x%j==0){
	count++;
	break;
    }
  }
  }
  printf("%d\n",(num-count));

  return 0;
}

