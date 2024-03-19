#include <stdio.h>

int main(){
  int n, a, b, c, d, i;
  scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
  char u;
  for(i = 0; i < n; i++){
    scanf(" %c", &u);
  }
  if(n%3&&(n%3!=1||(b%3+c%3)%2)){printf("No\n");}
  else{printf("Yes\n");}
  return 0;
}
