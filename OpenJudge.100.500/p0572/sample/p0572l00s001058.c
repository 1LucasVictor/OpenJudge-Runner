#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Min(a, b) ((a) > (b) ? (b) : (a))
#define abs(x) ((x) > 0 ? (x) : -(x))
#define pri(x) (printf("%d", x))
#define prll(x) (printf("%lld", x))
#define sci(x) (scanf("%d", &x))
#define scll(x) (scanf("%lld", &x))
#define endl printf("\n");
typedef long long ll;

int
main(int argc, char *argv[])
{
  int l, r;
  sci(l); sci(r);

  if(r - l >= 2018) pri(0);
  else{
    int a[2018];
    for(int i = 0; i <= r- l; i++){
      a[i] = (l + i) % 2019;
     
    }
    int n = r- l + 1; int min = 2019;
    for(int i = 0; i < n; i++){
      for(int j = i + 1; j < n; j++){
	min = Min(min, (a[i] * a[j]) % 2019);
      }
    }
    pri(min);
  }
  return 0;
}
	  
