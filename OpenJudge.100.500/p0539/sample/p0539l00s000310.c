#include<stdio.h>
int main(void){
  int n,a,b;
  scanf("%d",&n);
  for(a=9;a>=1;a--){
    for(b=9;b>=1;b--){
      if(a*b==n){
        printf("Yes\n");
        return 0;
      }
    }
  }
  printf("No\n");
  return 0;
}
