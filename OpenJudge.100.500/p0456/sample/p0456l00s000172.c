#include <stdio.h>
#include <string.h>

#define LENGTH 20001
int main(){
  char S[LENGTH];
  char T[LENGTH];
  int r=0;
  int count=0;
  r=scanf("%s\n%s", S, T);
  int size = strlen(S);
  for(int i=0; i< size; i++){
    if(S[i]!=T[i]){
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}
