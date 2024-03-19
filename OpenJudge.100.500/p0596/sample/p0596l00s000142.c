#include <stdio.h>
#include <string.h>

char S[100000];

int Do(void){
  int i, j, c, N;
  N = strlen(S);
  c = 0;
  while(1){
    for(i = 0;i < N - 1;i++){
      if(S[i] == '0' || S[i] == '1'){
	for(j = i + 1;j < N;j++){
	  if(S[j] == '?') continue;
	  if(S[i] + S[j] == '0' + '1'){
	    S[i] = '?';
	    S[j] = '?';
	    c += 2;
	    break;
	  }
	}
	if(j < N) i = -1;
      }
    }
    if(i == N - 1) break;
  }
  return c;
}

int main(void){
  scanf("%s", S);
  printf("%d\n", Do());
  return 0;
}
  
