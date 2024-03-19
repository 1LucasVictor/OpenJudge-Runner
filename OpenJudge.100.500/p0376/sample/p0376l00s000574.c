#include<stdio.h>

int main(){
  int a[100], n, i;
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &a[i]);
  }
  
  for(i=(n-1); i>-1; i--){
    printf("%d", a[i]);
    if(i==0){
    } else {
      printf(" ");
    }
  }
  printf("\n");
  return 0;
}