#include <stdio.h>

#define N  4

int main(){
  const char abc[N] = "ABC";
  const char arc[N] = "ARC";
	char s[N];
  int abc_cnt = 0;
  int arc_cnt = 0;

  scanf("%s", s);

  for (int ii = 0; ii < N - 1; ii++) {
    if(s[ii] == abc[ii]){
      abc_cnt++;
    }
    if(s[ii] == arc[ii]) {
      arc_cnt++;
    }
  }

  if(abc_cnt == 3){
    puts("ARC");
  }else if(arc_cnt == 3){
    puts("ABC");
  }

  return 0;
}