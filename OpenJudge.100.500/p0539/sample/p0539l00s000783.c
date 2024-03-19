#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(){
  int a,b;
  int x;
  int i;

  scanf("%d", &x);

  a = 1000;
  b = 1000;

  for(i = 9;i >= 2;i--){
    if(x % i == 0){
      a = i;
      x = x/i;
      b = x;
      break;
    }
  }

  if(a > 9 || b > 9) printf("No\n");

  else printf("Yes\n");

  return 0;
}
