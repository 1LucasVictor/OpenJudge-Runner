#include <stdio.h>

int main(){
  
  int	N;
  char	s[8] = {0};
  
  scanf("%d", &N);
  sprintf(s, "%d", N);

  if(s[0]=='7' || s[1]=='7' || s[2]=='7'){ printf("Yes"); }
  else{ printf("No"); }

  return 0;
}