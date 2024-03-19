#include<stdio.h>

int main(){
  int n;
  int i;
  int flg=0;
  
  scanf("%d", &n);
  
  for(i=9;i>0;i--){
    if(n%i==0){
      if(n / i < 10){
        printf("Yes\n");
        flg=1;
        break;
      }
    }
  }
  if(flg==0){
    printf("No\n");
  }
  return 0;
}
    
  