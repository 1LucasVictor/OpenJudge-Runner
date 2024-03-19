#include <stdio.h>

int main() {
  int n,j,i,a[200000],b[200000]={0};
  scanf("%d",&n);
  for(i=2;i<=n;i++){
    scanf("%d",&a[i]);
    b[a[i]]++;
  }
  for(i=1;i<=n;i++){
    printf("%d\n",b[i]);
  }
  return 0;
}
