#include<stdio.h>
int main(){

  int h, a, n;
  scanf("%d %d",&h, &a);
  if(h%a==0){
  n=(h-h%a)/a;
  }
  else{
      n=(h-h%a)/a+1;
  }
  printf("%d\n", n);
  return 0;
}
