#include <stdio.h>
#include <stdlib.h>

#define buff 10

int main (void){
  char s[buff] = {'\0'};
  char t[buff+1] = {'\0'};

  int i=0;
  
  if ( scanf("%s",s) == 1){
    if( scanf("%s",t) == 1){
  while(s[i] != '\0' && i < buff){
    if (s[i] != t[i]){
      printf("No\n");
      return 1;
    }
    i++;
  }
  printf("Yes\n");
    }}


  return 0;
  
}
