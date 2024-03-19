#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef long long int int64;

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(a) ((a)>(0)?(a):-(a))

void run(void){
  int a,b,x;
  scanf("%d%d%d",&a,&b,&x);
  if(x<=a+b && x>=a){
    printf("YES\n");
  } else {
    printf("NO\n");
  }
}

int main(void){
  run();
  return 0;
}