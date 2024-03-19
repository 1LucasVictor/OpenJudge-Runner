#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char s[3];
  int i;
  int num=0;
  scanf("%s", s);
  
  for(i=0;i<3;i++){
    if(s[i]=='1')num++;
  }
  
  printf("%d\n", num);
}
