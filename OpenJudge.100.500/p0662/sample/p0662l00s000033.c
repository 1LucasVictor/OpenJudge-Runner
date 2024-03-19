#include<stdio.h>

int main()
{
  int a,b,c,d,x;
  
  scanf("%d %d %d %d", &a, &b, &c, &d);
  
  if(a < c){
    if(b < d){
      x = b - c;
    }else{
      x = d - c;
    }
  }else{
    if(b > d){
      x = d - a;
    }else{
      x = b - a;
    }
  }
  
  if(x > 0){
    printf("%d\n", x);
  }else{
    printf("0\n");
  }
  
  return 0;
}