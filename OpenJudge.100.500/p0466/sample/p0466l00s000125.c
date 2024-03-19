#include <stdio.h>
#include <string.h>

int main(){
  char	S[16] = {0};
  char	T[16] = {0};
  char	ss[16] = {0};
  char	tt[16] = {0};
  int	len;
  
  scanf("%s", S);
  scanf("%s", T);
  
  len = strlen(S);
  strncpy( tt, T, len );
  if( strcmp( S, tt ) == 0 ){
    if( strlen(T) == len+1 ){ printf("Yes"); return 0; }
  }
  printf("No");
  
  return 0;
}