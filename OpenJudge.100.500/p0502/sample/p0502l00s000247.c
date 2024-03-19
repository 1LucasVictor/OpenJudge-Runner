#include<stdio.h>

int main(void){
  int n = 0;
  scanf("%d", &n);
  int i = 0;
  int a[n];
  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
  for(i=0;i<n;i++){
    if (a[i] % 2 == 0){
      if(a[i] % 3 == 0 || a[i]%5==0){
        
      }else{
        printf("DENIED");
        return 0;
      }
    }
  }
  printf("APPROVED");
  return 0;
}