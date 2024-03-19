#include<stdio.h>

int main(void)
{
  int n, d;
  int x, y;

  scanf("%d %d", &n, &d);

  int ans = 0;

  for(int i=0; i<n; i++){
	scanf("%d %d", &x, &y);
	if(x*x + y*y <= d*d){
	  ans++;
	}
  }

  printf("%d\n", ans);

  return 0;
}
