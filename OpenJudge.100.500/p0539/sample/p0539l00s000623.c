#include<stdio.h>
int main(void){
  int n,a=0;
  
  scanf("%d",&n);
  
  for(int i = 1; i <= 9; i++) {
    for(int j = 1; j <= 9; j++) {
      if(i*j == n)
        a = 1;
    }
  }
  if(a==1)
    printf("Yes");
  if(a==0)
    printf("No");
  return 0;
}
