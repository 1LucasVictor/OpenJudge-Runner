#include<stdio.h>

int main(void){
  int n;
  scanf("%d",&n);
  
  int a[200001] = {0} , b;
  for(int i = 0;i < n-1;i ++){
    scanf("%d",&b);
    a[b] ++;
  }
  for(int i = 1;i <= n;i ++){
    printf("%d\n",a[i]);
  }

  return 0;
}