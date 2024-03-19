#include<stdio.h>

int main(void){

  int a,b, output, input, temp=1;

  while(scanf("%d %d", &a, &b)!= EOF){

  temp = 1;
  input = 0;
  output = 0;

  input = a + b;

  for(output = 0; input != 0; output++){
    input /= 10;

  }

  if(a == 0 && b == 0)
    output = 1;
  

  printf("%d\n", output);
  }

  return 0;
}