#include<stdio.h>

int Product(int c, int d){
  if(c * d % 2 == 0){
    printf("Even\n");
  }else
  {
    printf("Odd\n");
  }
}

int main(){
  int a,b;
  scanf("%d %d",&a, &b);
  Product(a,b);

  return 0;
}