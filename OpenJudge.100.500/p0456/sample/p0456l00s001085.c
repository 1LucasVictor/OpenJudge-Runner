#include <stdio.h>
#include <string.h>
int main() {
  char S[2000000];
  char T[2000000];
  scanf("%s %s", &S, &T);
  int count = 0;
  for(int i = 0; i < strlen(S); i++){
    if(S[i] != T[i]){
      count++;
    }
  }
  printf("%d", count);
}