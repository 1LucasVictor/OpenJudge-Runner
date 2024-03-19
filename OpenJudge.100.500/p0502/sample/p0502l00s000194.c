#include <stdio.h>
int main(){
  int n,a;
  scanf("%d",&n);
  for(int i=0; i<n; i++){
    scanf("%d", &a);
    if( a%2==0 ){
      if( a%3 && a%5 ){ printf("DENIED\n"); return 0; }
    }
  }
  printf("APPROVED\n");
  return 0;
}