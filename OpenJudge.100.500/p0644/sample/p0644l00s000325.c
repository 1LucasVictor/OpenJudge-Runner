#include <stdio.h>

int main(void){
  int v=0;
  char s[4];
  scanf("%s",s);
  for(int i=0;i<3;i++){
    if(s[i]=='1'){v++;}
  }
  printf("%d\n",v);
  return 0;
}