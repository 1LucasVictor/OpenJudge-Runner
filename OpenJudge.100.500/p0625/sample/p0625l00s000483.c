#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef long long int int64;

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(a) ((a)>(0)?(a):-(a))

void run(void){
  int a,b;
  scanf("%d%d",&a,&b);
  printf("%s\n",(a<=8 && b<=8)?"Yay!":":(");
  return;
}

int main(void){
  run();
  return 0;
}