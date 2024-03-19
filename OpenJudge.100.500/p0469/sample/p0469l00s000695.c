#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>
#include <assert.h>
#include <errno.h>

#define loop(i,a,n) for (int i = a; i < n; ++i)
#define print(i) printf("%d\n",i)
#define input(a) scanf("%d",&a)
#define input2(a,b) scanf("%d %d",&a,&b)
#define input3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define inputv(a,n) loop(i,0,n) input(a[i])

int main(void)
{
  int k,a,b;
  input(k);
  input2(a,b);
  loop(i,a,b+1) 
    if (i % k == 0) {
      printf("OK");
      return 0;
  	}
  printf("NG");
  return 0;
}