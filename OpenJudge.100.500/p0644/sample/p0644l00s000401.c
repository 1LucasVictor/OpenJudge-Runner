#include <stdio.h>
int main(void) {
  char s[4];
  int v=0;
  scanf("%s",s);
  for(int i=0;i<4;i++){if(s[i]=='1'){v++;}}
  printf("%d\n",v);
  return 0;
}