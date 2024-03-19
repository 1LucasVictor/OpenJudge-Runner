#include <stdio.h>
int main(){

  int x,y,z,f;
  
  scanf("%d",&z);
    x = z/3600;
    y = (z%3600)/60;
    f = (z%3600)%60;
    printf("%d:%d:%d\n",x,y,f);

  return 0;
}