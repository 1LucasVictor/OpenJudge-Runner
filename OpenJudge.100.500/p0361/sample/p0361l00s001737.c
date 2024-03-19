#include <stdio.h>
int main(){

  int S,h,m,s;
  
  scanf("%d", &S);
  printf("%d:%d:%d\n", S/3600,(S/60)%60,S%60);

 return 0;
}
