#include<stdio.h>
int main(){
  int n;
  int max = -1000000;
  int min = 1000000;
  unsigned int sum = 0;
  int i;
  scanf("%d", &n);
  for(i = 1 ; i <= n ; i++){
    int a;
    scanf("%d", &a);
    sum = sum + a;
    if(a < min){
      min = a;
    }
    if(a > max){
      max = a;
    }
  }
  printf("%d %d %d\n", min, max, sum);
  return 0;
}

