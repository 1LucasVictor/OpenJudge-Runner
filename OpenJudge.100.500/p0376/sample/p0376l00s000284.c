#include <stdio.h>
int main(void){
  int n;
  int tmp;

  scanf("%d\n",&n);
  int num[n];

  for(int i = 0; i < n; i++){
    scanf("%d\n",&num[i]);
  }
  for(int i = (n-1); i >= 0; i--){
    if(i != 0){
      printf("%d ",num[i]);
    }else{
      printf("%d",num[i]);
    }
  }
    printf("\n");
    return 0;
}
