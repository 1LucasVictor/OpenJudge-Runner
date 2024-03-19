#include <stdio.h>

int main(){
  int n;
  int paper;
  
  scanf("%d", &n);

  paper = n /2;
  if(n%2 ==1)
    paper++;
  
  printf("%d", paper);
}