#include <stdio.h>

int main(void){
  char s[200001];
  int i, n, a, b, c, d, flag1 = 1, flag2 = 1;
  scanf("%d %d %d %d %d %s", &n, &a, &b, &c, &d, s);
  if(c > d){
    flag1=0;
  	for(i = b-2; i < d; i++){
    	if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') flag1 = 1;
    }
  }
  for(i = a-1; i < d-1; i++){
    if(s[i] == '#' && s[i+1] == '#') flag2 = 0;
  }
  if(flag1 == 1 && flag2 == 1){printf("Yes\n");}
  else{ printf("No\n");}
  return 0;
}