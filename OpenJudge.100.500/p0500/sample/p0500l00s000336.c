#include <stdio.h>
#define min(a, b) ((a)>(b) ? (b) : (a))

int n, m, s[6], c[6];
int ans = 10000;

void dfs(int array[]){
  if(array[0] == n){
    int num = 0;
    int flag = 1;
    for(int i=1; i<=n; i++){
      num = num * 10 + array[i];
      for(int j=0; j<m; j++)
	if(s[j] == i)
	  if(array[i] != c[j]){
	    flag = 0;
	    break;
	  }
    }
    if(flag)  ans = min(ans, num);
    return;
  }

  int start = array[0]==0 ? 1 : 0;
  for(int i=start; i<=9; i++){
    array[++array[0]] = i;
    dfs(array);
    array[0]--;
  }
}

int main(){
  scanf("%d %d", &n, &m);
  for(int i=0; i<m; i++)  scanf("%d %d", &s[i], &c[i]);
  int array[5] = {0};
  dfs(array);
  ans = ans==10000 ? -1 : ans;
  printf("%d\n", ans);
  return 0;
}
