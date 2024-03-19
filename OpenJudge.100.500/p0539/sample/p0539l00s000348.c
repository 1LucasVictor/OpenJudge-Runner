#include<stdio.h>
int main(void){
  int n;
  scanf("%d",&n);
  for(int i=9;i>=1;i--){
	if(n%i==0){
      if(n/i>=1&&n/i<=9){
        printf("Yes");
        return 0;
      }
    }
  }
  printf("No");
  return 0;
}