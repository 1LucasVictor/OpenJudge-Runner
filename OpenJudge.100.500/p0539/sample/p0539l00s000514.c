#include <stdio.h>

int main(void){
  int n;
  int frag=0;
  scanf("%d",&n);
  for(int i=1;i<=9;i++){
    for(int j=1;j<=9;j++){
      if(frag==0 && i*j==n){
        printf("Yes");
        frag=1;
      }
    }
  }
  if(frag==0){
    printf("No");
  }
  return 0;
}
