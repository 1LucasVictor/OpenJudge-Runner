#include <stdio.h>

int main(){
  int s;
  scanf("%d",&s);
  int ji=s/3600;
  s=s%3600;
  int hu=s/60;
  s=s%60;
  printf("%d:%d:%d\n",ji,hu,s);
  return 0;
}