#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
  char s[3];
  int i, c=0;
  scanf("%s",s);
  for(i=0;i<3;i++) if(s[i]=='1') c++;
  printf("%d\n",c);
  return 0;
}
