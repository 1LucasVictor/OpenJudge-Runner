#include <stdio.h>

int main(){
  int a,b;
  scanf("%d %d", &a, &b);
  int tap = 1;
  int cnt=0;
  while(tap<b){
    tap-=1;
    tap+=a;
    cnt++;
  }
  printf("%d\n", cnt);
  return 0;
}
