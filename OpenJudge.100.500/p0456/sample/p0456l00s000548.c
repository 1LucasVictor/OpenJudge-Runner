#include <stdio.h>
#include <string.h>
int main(){
  int n= 200001;
  char S[n];
  char T[n];
  int count=0;
  int ret = 0;
  ret = scanf("%s\n", S);
  ret = scanf("%s\n", T);
  int size = strlen(S);
  for(int i=0; i< size; i++){
    if(S[i]!=T[i]){
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}
