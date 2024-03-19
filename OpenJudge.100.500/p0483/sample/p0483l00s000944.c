#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  scanf("%d",&n);
  for(int i=0;i<3;i++){
    if(n%10==7){
      printf("Yes\n");
      return 0;
    }
    n = n/10;
  }

  printf("No\n");
  return 0;

}