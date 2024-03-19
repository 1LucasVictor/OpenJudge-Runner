#include<stdio.h>

int main(void)
{
  long int n, d;
  long int x, y;

  scanf("%ld %ld", &n, &d);

  int ans = 0;

  for(int i=0; i<n; i++){
	scanf("%ld %ld", &x, &y);
	if(x*x + y*y <= d*d){
	  ans++;
	}
  }

  printf("%d\n", ans);

  return 0;
}
