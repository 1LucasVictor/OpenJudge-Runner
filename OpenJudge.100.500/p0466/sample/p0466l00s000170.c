#include <stdio.h>
#include <string.h>
int main(){
  char S[10];
  char T[11];
  scanf("%s",S);
  scanf("%s",T);
  int i,j;
  int k=0;
  for (i=0;S[i]!='\0';i++);
  for (j=0;j<=i;j++){
  if (strncmp(S,T,j)!=0){
    k++;
  }
  }
  if (k==0){
    printf("Yes\n");
  } else {
    printf("Mo\n");
  }
  return 0;
}