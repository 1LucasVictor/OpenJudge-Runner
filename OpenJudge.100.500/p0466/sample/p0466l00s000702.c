#include <stdio.h>
#include <string.h>
 
int main(void) {
  char S[10],T[11];
  int i;
  if(scanf("%s\n%s", S, T)==1);
  if (strlen(S)==strlen(T)-1) {
    for(i=0;i<strlen(S);i++) {
      if(S[i]!=T[i]) {
    	printf("No");
        return 0;
      }
    }
    printf("Yes");
  }
  else {
    printf("No");
  }
  return 0;
}