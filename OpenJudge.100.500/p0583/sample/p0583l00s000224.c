#include <stdio.h>
#define min(x, y) ((x)>(y) ? (y) : (x))

int main(){
  int n, a, b, c, d;
  scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);

  char s[200005];  scanf("%s", s);
  int ans = 1;

  if(c > d){
    int flag = 1;
    for(int i=min(a, b); i<=d; i++)
      if(s[i-2]=='.' && s[i-1]=='.' && s[i]=='.'){
	flag = 0;
	break;
      }
    if(flag){
      printf("No\n");
      return 0;
    }
  }

  for(int i=min(a, b); i<min(c, d); i++)
    if(s[i-1]=='#' && s[i]=='#'){
      ans = 0;
      break;
    }

  printf("%s\n", (ans ? "Yes" : "No"));
  return 0;
}
    
