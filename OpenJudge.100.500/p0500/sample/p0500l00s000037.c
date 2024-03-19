#include <stdio.h>
#define swap(type, x, y) do{ type t = x; x = y; y = t; }while(0)
int ten(int n){
  int r = 1;
  for(int i=0; i<n; i++)  r = r * 10;
  return r;
}
int main(){
  int n, m;  scanf("%d%d", &n, &m);
  int s[6], c[6];
  for(int i=0; i<m; i++)  scanf("%d%d", &s[i], &c[i]);
  
  for(int i=0; i<m-1; i++)
    for(int j=m-1; j>i; j--)
      if(s[j-1] > s[j]){
        swap(int, s[j-1], s[j]);
        swap(int, c[j-1], c[j]);
      }
  int ans = 0;
  for(int i=1; i<m; i++)
    if((s[i-1]==s[i] && c[i-1]!=c[i])||(s[i]==1 && c[i]==0)){
      printf("-1\n");
      return 0;
    }
  int aa = 1;
  for(int i=0; i<m; i++){
    if(s[i] >= aa){
      aa = s[i] + 1;
      ans = ans + c[i]*ten(n-s[i]);
    }
  }
  if(s[0] != 1)
    ans = ans + ten(n-1);
  printf("%d\n", ans);
  return 0;
}