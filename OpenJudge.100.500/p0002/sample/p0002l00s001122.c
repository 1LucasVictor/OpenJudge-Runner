#include<stdio.h>
int main(void){
  int a, b, c, n, i, sya, sum;
  scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c){
      sya = a*a;
      sum = b*b + c*c;
    } else if(b > a && b > c){
      sya = b*b;
      sum = a*a + c*c;
    } else {
      sya = c*c;
      sum = a*a + b*b;
    }
    if(sya == sum){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
  return 0;
}