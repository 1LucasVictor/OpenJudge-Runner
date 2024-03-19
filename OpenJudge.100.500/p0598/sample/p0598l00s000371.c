#include <stdio.h>
#include <stdlib.h>

typedef long long int int64;

#define MAX(a,b) ((a)>(b)?(a):(b))

int main(int argc, char *argv[])
{
  int a,b;
  scanf("%d %d", &a, &b);

  if(b%a==0){
    printf("%d\n", a+b);
  }else{
    printf("%d\n", b-a);
  }
  return 0;
}
