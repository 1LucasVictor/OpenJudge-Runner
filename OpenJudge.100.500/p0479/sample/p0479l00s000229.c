#include<stdio.h>

int main(void)
{
  int n;

  scanf("%d", &n);

  int a[n-1], b[n];

  int i;

  for(i=0; i<n-1; i++){
	scanf("%d", &a[i]);
  }

  for(i=0; i<n; i++){
	b[i] = 0;
  }

  for(i=0; i<n-1; i++){
	b[a[i]-1]++;
  }

  for(i=0; i<n; i++){
	printf("%d\n", b[i]);
  }

  return 0;
}
