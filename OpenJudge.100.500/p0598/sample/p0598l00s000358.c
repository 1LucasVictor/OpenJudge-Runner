#include<stdio.h>
int a, b;
int main(){
  scanf("%d%d", &a, &b);
  if(b%a==0){
    printf("%d\n", a+b);
  }else{
    printf("%d\n", b-a);
  }
}
