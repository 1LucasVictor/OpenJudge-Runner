#include <stdio.h>

int main() {
  int n,j,i,a[200000],b[200000];
  scanf("%d",&n);
  for(i=2;i<=n;i++){
    scanf("%d",&a[i]);
  }
  for(i=1;i<n;i++){
    b[i]=0;
    for(j=2;j<=n;j++){
      if(a[j]==i) {b[i]++;}
    }
    printf("%d\n",b[i]);
  }
  printf("0\n");
  return 0;
}
