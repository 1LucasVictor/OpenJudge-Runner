#include<stdio.h>

int main(){
  int n;
  char S[100],T[100];
  scanf("%s%s",S,T);
  for(n=0;n<100;n++){
    if(S[n]=='\0'){
      printf("Yes\n");
      break;
    }
    else if(S[n]!=T[n]){
      printf("No\n");
      break;}
  }
  return 0;
}
  