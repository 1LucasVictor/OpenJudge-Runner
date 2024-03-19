#include <stdio.h>
#define max(x, y) ((x)<(y) ? (y) : (x))

int main(){
  int n, a, b, c, d;
  scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
  char s[200005];  scanf("%s", s);

  int ans = 1;
  for(int i=a+1; i<=max(c, d)-2; i++)
    if(s[i]=='#' && s[i+1]=='#')  ans = 0;

  if(ans && d<c){
    int flag = 0;
    for(int i=b-1; i<=d-1; i++){
      if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.')
	flag = 1;
    }
    ans = flag;
  }

  printf("%s\n", ans ? "Yes" : "No");
  return 0;
}
