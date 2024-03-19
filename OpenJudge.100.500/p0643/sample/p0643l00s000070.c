#include<stdio.h>
int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  switch(a * b % 2){
    case 0:
      printf("Even\n");
      break;
    case 1:
      printf("Odd\n");
      break;
  }
  return 0;
}