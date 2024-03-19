#include <stdio.h>

int main(){
  int i, j, n;
  int a[200000];
  int max;

  scanf("%d",&n);
  
  for(i=0; i<n; i++)
    scanf("%d",&a[i]);

  max=a[1]-a[0];
  
  for(i=2; i<n; i++)
    for(j=0; j<i-1; j++)
      if(a[i]-a[j]>max)
	max=a[i]-a[j];

  printf("%d\n",max);

  return 0;
}

