#include <stdio.h>
int main(){
  char S[5];
  int i,k;
  int num = 0;
  scanf("%s",S);
  for(i=0;i<=3;i++){
    for(k=0;k<=3;k++){
      if(S[i] == S[k]){
        num = num+1;
      }
    }
  }
  if(num == 8)printf("Yes");
  else printf("No");
}