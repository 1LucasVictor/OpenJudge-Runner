#include <stdio.h>

int main(void){
  int n,i,j;
  int a[199999],b[200000]={0};
  
  scanf("%d", &n);
  for(i=0;i<=n-2;i++)scanf("%d", &a[i]);
  
  for(i=0;i<=n-2;i++){
    scanf("%d", &a[i]);
    for(j=1;j<=n-1;j++)if(a[i]==j)b[j]++;
  }
  
  for(i=1;i<=n;i++)printf("%d\n", b[i]);
  
  return 0;
}