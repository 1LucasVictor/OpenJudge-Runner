#include<stdio.h>
#include<string.h>
#define MAX 200000

int main(void){
  char S[MAX], T[MAX];
  int count = 0, i = 0;
  scanf("%s", &S);
  scanf("%s", &T);
  
  while (S[i] != NULL){
	if (S[i] != T[i]){
      count++;
    }
    i++;
  }
  
  printf("%d", count);
  
  return 0;
}
