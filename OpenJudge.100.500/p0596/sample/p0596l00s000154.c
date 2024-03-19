#include <stdio.h>

int main(){
  char s;
  int num_r = 0;
  int num_b = 0;
  int ret;
  while(1){
    ret = scanf("%c",&s);
    if(ret == EOF) break;
    if(s == '0') num_r++;
    else num_b++;
  }
  
  int answer = 2*num_r;
  if(num_r > num_b) answer = 2*num_b;
  
  printf("%d\n",answer);
  return 0;
}