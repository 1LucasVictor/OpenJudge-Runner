#include <stdio.h>
int main(){
  char a[5];
  int r=0;
  scanf("%s",a);
  for(int i=0;i<4;i++)for(int j=i+1;j<4;j++)if(a[i]==a[j])r=1;
  (r==0)?puts("Good"):puts("Bad");
  return 0;
}