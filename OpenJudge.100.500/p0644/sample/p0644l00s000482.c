#include <stdio.h>
int main(void){
  char s[3];
  int i,co=0;
  scanf("%s",s);
  for(i=0;i<3;i++){
    if(s[i]=='1') co++;
  }
  printf("%d\n",co);
  return(0);
}
