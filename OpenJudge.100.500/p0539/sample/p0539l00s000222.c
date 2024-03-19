#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int i=9;
  int k;
  while(0<i){
    if(n%i==0){
      k=n/i;
      if(k>=10){
        printf("No\n");
        return 0;
      }else{
        printf("Yes\n");
        return 0;
      }
    }else{
      i--;
      if(i==0){
        printf("No\n");
        return 0;
      }
    }
  }
  return 0;
}
