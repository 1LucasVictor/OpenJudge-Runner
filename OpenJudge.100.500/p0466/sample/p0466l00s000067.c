#include <stdio.h>
#include <string.h>

int main() {
  char S[20];
  char T[21];
  scanf("%s",S);
  scanf("%s",T);
  int sizeS = strlen(S);
  int sizeT = strlen(T);
  int count = 0;
  if(sizeS>=1 && sizeS<=10 && sizeT==sizeS+1) {
    for(int i=0;S[i]!='\0';i++) {
      if(S[i]==T[i]) {
	count++;
      }
    }
    if(count==sizeS && T[sizeT-1]>=97 && T[sizeT-1]<=122) {
      printf("Yes");
    }else {
      printf("No");
    }
  }
  return 0;
}