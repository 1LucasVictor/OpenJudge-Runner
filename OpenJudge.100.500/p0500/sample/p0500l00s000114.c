#include <stdio.h>
#include <math.h>

int output(int *ans, int N, int flag){
  if(flag == 1){
    puts("-1");
    return 0;
  }

  if(ans[N-1] == -1)
    ans[N-1] = 1;
  
  int i;
  for(i=1; i<=N; i++){
    if(ans[N-i] == -1)
      ans[N-i] = 0;
    printf("%d", ans[N-i]);
  }
  printf("\n");

  return 0;
}

int main(void){
  int N, M;
  int s, c;
  int ans[5] = {-1, -1, -1, -1, -1};
  int i;
  int flag = 0;

  scanf("%d %d", &N, &M);

  for(i=0; i<M; i++){
    scanf("%d %d", &s, &c);
    if(((ans[N-s] != -1) && (ans[N-s] != c)) || (s == 1 && c == 0))
      flag = 1;
    ans[N-s] = c;
  }

  output(ans, N, flag);
	 
  return 0;
}
