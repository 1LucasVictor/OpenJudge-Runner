#include<stdio.h>

int main(){
  int n, i, a[200007], boss;
  scanf("%d",&n);
  a[1] = 0;
  for(i=2;i<=n;i++){
    a[i] = 0;
    scanf("%d",&boss);
    a[boss]++;
  }
  for(i=1;i<=n;i++){
    printf("%d\n",a[i]);
  }
}