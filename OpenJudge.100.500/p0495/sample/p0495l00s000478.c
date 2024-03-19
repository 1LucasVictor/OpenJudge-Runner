#include <stdio.h>
int main(){
char S[10];
  scanf("%s",S);
  
  if((S[0]=='A' || S[1]=='A' || S[2]=='A') && (S[0]=='B' || S[1]=='B' || S[2]=='B')){
    printf("Yes\n");
  }else{
  printf("No\n");
  }
   return 0;
}