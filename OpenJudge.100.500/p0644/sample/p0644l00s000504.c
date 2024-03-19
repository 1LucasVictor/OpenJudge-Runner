#include <stdio.h>

int main(int argc, char** argv){
  int num;
  int cnt = 0;
  scanf("%d", &num);
  
  if(num%2 == 1) cnt++;
  if((num/10)%2 == 1) cnt++;
  if((num/100)%2 == 1) cnt++;
  printf("%d\n", cnt);
  return 0;
}  