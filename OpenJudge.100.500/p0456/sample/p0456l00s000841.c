#include <stdio.h>
#include <string.h>
int main(){
  int n=256;
  char S[n];
  char T[n];
  int count=0;
  scanf("%s\n", S);
  scanf("%s\n", T);
  int size = strlen(S);
  for(int i=0; i< size; i++){
    if(S[i]!=T[i]){
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}
