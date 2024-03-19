#include<stdio.h>

int main() {
  
  int i, n=0;
  char S[40000], T[40000];
  
  scanf("%s%s", S, T);
  
  for(i=0; S[i]!='\0'; i++) {
    
    if(S[i] != T[i]) {
      
      n++;
      
    }
    
  }
  
 printf("%d", n);
  
  return 0;
}