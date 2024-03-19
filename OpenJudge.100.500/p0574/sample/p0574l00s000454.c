#include <stdio.h>
int main(){
  int S[10];
  scanf("%s",S);
  if(S[0] == S[1])printf("Bad");
  else if(S[1] == S[2])printf("Bad");
  else if(S[2] == S[3])printf("Bad");
  else printf("Good");
}