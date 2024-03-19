#include <stdio.h>
int main(){
 int a, b, c, i, cnt, k, u; cnt = 0;
 scanf("%d %d %d", &a, &b, &c);
 for(i = a; i <= b; i++){
  for(k = 1; k <= c; k++){
   if(c % k == 0 && i == k) cnt++;
  }
 }
 printf("%d\n", cnt);
 return 0;
}