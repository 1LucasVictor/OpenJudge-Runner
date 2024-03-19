#include <stdio.h>
int main(){
  char a[5];
  int r=0;
  scanf("%s",a);
  for(int i=0;i<4;i++)if(a[i]==a[i+1])r=1;
  (r==0)?puts("Good"):puts("Bad");
  return 0;
}