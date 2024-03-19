#include<stdio.h>
#include<string.h>
int main(){
  char S[3];
  char A[3] = "AAA";
  char B[3] = "BBB";

  scanf("%s", S);

  if(strncmp(S, A, 3) == 0 && strncmp(S, B, 3) != 0) printf("No");
  else if(strncmp(S, A, 3) != 0 && strncmp(S, B, 3) == 0) printf("No");
  else printf("Yes");

  return 0;
}