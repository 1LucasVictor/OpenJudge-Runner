#include<stdio.h>
int main(){
  int x;
  char* ans = "Yes";
  scanf("%d", &x);
  if(x<30) ans="No";
  printf("%s", ans);
  return 0;
}
