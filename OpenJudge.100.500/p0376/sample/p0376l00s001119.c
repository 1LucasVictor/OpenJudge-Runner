#include <stdio.h>

int main(void){
    
  int i,n;
  scanf("%d",&n);
  int x[n];

  for (i=0;i<=n-1;i++){
    scanf("%d",&x[i]);
  }
  for (i=1;i<=n-1;i++){
    printf("%d ",x[n-i]);
  }
  printf("%d\n",x[0]);
  return 0;
}