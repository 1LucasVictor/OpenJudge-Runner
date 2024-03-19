#include<stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  
  for(int i=1; i<=9; i++){
    for(int j=1; j<=9; j++){
      if(i*j==n){
        printf("Yes");
        return 0;
      }
    }
  }
  
  printf("No");
  return 0;
}