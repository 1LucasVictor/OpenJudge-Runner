#include<stdio.h>

int main(void){
  int n,tmp;
  
  scanf("%d",&n);
  
  while(n>0){
    tmp=n%10;
    if(tmp==7){
      printf("Yes");
      return 0;
    }
    n=(n-tmp)/10;
  }
  printf("No");
  return 0;
}
    