#include <stdio.h>

int main(){
  int n, t;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    scanf("%d", &t);
    if(t%2 == 0 && !(t%3==0 || t%5==0)){
      printf("DENIED\n");
      return 0;
    }
  }
  printf("APPROVED\n");
  return 0;
}