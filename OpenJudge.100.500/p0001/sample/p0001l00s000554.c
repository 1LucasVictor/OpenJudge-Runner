#include <stdio.h>
int main(void){
  int x,y,z;
  int ans;
  while(1){
    z = scanf("%d %d", &x, &y);
    if(z==EOF)break;
    ans=0;
    x = x + y;
    while(x > 0){
      x/=10;
      ans++;
    }
    printf("%d\n", ans);
  }
  return 0;
}