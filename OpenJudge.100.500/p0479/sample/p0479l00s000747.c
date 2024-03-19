#include <stdio.h>
#include <stdlib.h>
int main(){
  int n;
  int i;
  int a[200001]={0};
  int ai;
  scanf("%d",&n);
  for(i=1;i<n;i++){
    scanf("%d",&ai);
    a[ai]++;
  }
  
  for(i=1;i<=n;i++){
    printf("%d\n",a[i]);
  }
  return 0;
}
