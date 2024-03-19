#include <stdio.h>
#define LEN 105

int main(){
  
  int n,i;
  int num[LEN];
  scanf("%d",&n);

  for(i=0;i<n;i++){scanf("%d",&num[i]);}
  for(i=n-1;i>=0;i--){
    printf("%d",num[i]);
    if(i != 0)printf(" ");
  }
  printf("\n");
  return 0;
}

