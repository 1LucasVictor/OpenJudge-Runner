#include <stdio.h>
#include <string.h>

int main() {
  int i=0,count=0;
  char S[20001]="",T[20001]="";
  scanf("%s",S);
  scanf("%s",T);
  while(S[i] != '\0'){
    if(S[i] != T[i]) count++;
    i++;
  }
  printf("%d\n",count);
  return 0;
}
