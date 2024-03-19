#include<stdio.h>

int main(void){
  int num;
  int dig;
  int sum = 0;
  scanf("%d", &num);
  int a[4];
  int count=0;
 
  while(num){
    dig = num % 10;
    a[count] = dig;
    num = num / 10;
    count++;
  }
  int i;
  for(i=0;i<3;i++){
    if(a[i]==a[i+1]){
      printf("Bad");
      return 0;
    }
  }
  printf("Good");
}