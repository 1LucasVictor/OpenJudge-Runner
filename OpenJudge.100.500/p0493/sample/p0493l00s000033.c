#include<stdio.h>

int main(){
  int i;
  int s = 0;
  scanf("%d", &i);
  
  s += (i/500)*1000;
  i -= (i/500)*500;
  s += (i/5)*5;
  i -= (i/5)*5;
  printf("%d", s);
  
  return 0;
}