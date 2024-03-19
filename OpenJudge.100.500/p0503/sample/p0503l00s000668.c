#include <stdio.h>
#define N 200000

int main(void)
{
  int i, j, n;
  int a[N];

  scanf("%d", &n);

  for(i=0; i<n; i++)
    scanf("%d",&a[i]);

  /*全ての整数が異なるかどうか*/
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(a[i] == a[j])
	return	printf("NO\n");
    }
  }

  printf("YES\n");

  return 0;
}
