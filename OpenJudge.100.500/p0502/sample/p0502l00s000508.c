#include<stdio.h>

int main(){
  int n, flag = 0;
  scanf("%d", &n);
  
  int a;
  for(int i = 0;i < n;i++){
    scanf("%d", &a);
    if(a % 2 == 0 && a % 3 != 0 && a % 5 != 0){
      flag = 1;
    }
  }
  
  if(flag == 0){
    printf("APPROVED");
  }
  else{
    printf("DENIED");
  }
  
  return 0;
}