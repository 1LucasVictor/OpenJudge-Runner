#include<stdio.h>
 
int main(){
  char S[200000], T[200000];
  scanf("%s%s", &S, &T);
 
  int i, count=0;
  for(i=0; S[i]!='\0' ; i++){
      if(S[i]!=T[i])
        count++;
  }
 
  printf("%d\n", count);
  return 0;
}