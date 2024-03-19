#include <stdio.h>
#include <string.h>

int main(){

  char S[10];
  char T[11];

  scanf("%s %s", S, T);

  int len = 0;
  len = strlen( S );


  int i = 0, res = 0;
  for( i = 0; i < len; i++ ){
    if( S[i] != T[i] ){
      res = 1;
    }
  }

  if( res == 0 ){
    printf("Yes \n");
  }
  else{
    printf("No \n");
  }

  return 0;
}
