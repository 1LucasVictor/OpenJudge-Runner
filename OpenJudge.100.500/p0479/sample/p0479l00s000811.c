#include <stdio.h>

int main(void){
  int n,i,j;
  int a,b[200001]={0};
  
  scanf("%d", &n);
  
  for(i=0;i<=n-2;i++){
    scanf("%d", &a);
    b[a]++;
  }
  
  for(i=1;i<=n;i++)printf("%d\n", b[i]);
  
  return 0;
}

