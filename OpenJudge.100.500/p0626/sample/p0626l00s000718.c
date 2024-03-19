#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef long long int int64;

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(a) ((a)>(0)?(a):-(a))

void run(void){
  int d,n;
  scanf("%d%d",&d,&n);
  if(d==0){
    printf("%d\n",n==100?101:n);
  } else if(d==1){
    printf("%d\n",n==100?10100:n*100);
  } else {
    printf("%d\n",n==100?1010000:n*10000);
  }
  return;
}

int main(void){
  run();
  return 0;
}
