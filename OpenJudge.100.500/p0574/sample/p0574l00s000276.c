#include <stdio.h>

int main(){
  char S[5];
  int c=0;
  char A[2][6]={"Good","Bad"};
  
  scanf("%s",S);
  for(int i=0;i<3;i++)
    if(S[i]==S[i+1]) c=1;
  
  printf("%s\n",A[c]);
  return 0;
}