#include<stdio.h>

int main(){
  int a,b,sum,n;

  while(scanf("%d%d",&a,&b)!=EOF){
    sum = a + b;
    n = 1;
    while(1){
      sum /= 10;
      if(sum != 0)n++;
      else {
	printf("%d\n",n);
	break;
      }
    }
  }

  return 0;
}