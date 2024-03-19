#include <stdio.h>

int main(){
  int n, a[100], i;

  scanf("%d",&n);

  for (i=0;i<n;i++) scanf("%d",&a[i]);
  for(i=n-1;i>=0;i--) {
    if(i==0) printf("%d\n",a[i]);
    else printf("%d ",a[i]);
  }

  return 0;
}

