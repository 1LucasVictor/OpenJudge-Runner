#include <stdio.h>

int main(){
  int n;
  int i;
  
  scanf("%d",&n);
  
  for(i=9;i>=1;i--){
    if(n/i<10 && n%i==0 ){
      printf("Yes");
      return 0;
    }
  }
  printf("No");
}
