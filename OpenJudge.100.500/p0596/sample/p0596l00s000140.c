#include <stdio.h>
#include <string.h>

char S[100000];

int s[100000];

int Do(void){
  int i, j, p, c, C, N;
  scanf("%s", S);
  N = strlen(S);
  c = C = 0;
  for(i = 0;i < N;i++){
    if(c == 0){
      p = S[i] - '0';
      c++;
    }else{
      if(p == S[i] - '0') c++;
      else{
	s[C++] = c;
	p = S[i] - '0';
	c = 1;
      }
    }
    if(i == N - 1) s[C++] = c;
  }
  c = 0;
  for(i = 0;i < C;i++){
    if(s[i] != 0){
      for(j = i + 1;j < C;j++){
	if(s[j] != 0){
	  if((i + j) % 2 == 0){
	    s[i] += s[j];
	    s[j] = 0;
	    continue;
	  }
	  if(s[i] <= s[j]){
	    c += s[i] * 2;
	    s[i] = 0;
	    s[j] -= s[i];
	    break;
	  }else{
	    c += s[j] * 2;
	    s[j] = 0;
	    s[i] -= s[j];
	  }
	}
      }
    }
  }
  return c;
}

int main(void){
  printf("%d\n", Do());
  return 0;
}
