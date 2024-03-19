#include <stdio.h>
int main(void)
{
  int a[1000][1000]={0};
  int b[1000]={0};
  int out[1000]={0};
  int n,m;
  int i,j;

  scanf("%d",&n);
  scanf("%d",&m);
  for (i=0; i<n; i++) {
	for (j=0; j<m; j++) {
	  scanf("%d",&a[i][j]);
	}
  }

  for (i=0; i<m; i++) {
	scanf("%d",&b[i]);
  }

  for (i=0; i<n; i++) {
	for (j=0; j<m; j++) {
	  out[i]+=a[i][j]*b[j];
	}
  }

  for (i=0; i<n; i++) {
	printf("%d\n",out[i]);
  }
  return 0;
}