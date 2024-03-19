#include<stdio.h>
#include<stdlib.h>

int main(){
  int a, b, DigitOfNumber[200], j=0;
  while(scanf("%d%d", &a, &b) != EOF){
    DigitOfNumber[j] = returnDigitOfNumber(a+b);
    j+=1;
  }
  int i;
  for(i=0; i<j; i++){
    printf("%d\n", DigitOfNumber[i]);
  }
  return 0;
}

int returnDigitOfNumber(int number){
  int digit = 1, break_num = 10;
  while(number / break_num != 0){
    break_num *= 10;
    digit+=1;
  }
  return digit;
}