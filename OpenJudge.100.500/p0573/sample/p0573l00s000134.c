#include<stdio.h>

int main(){
  int i,j=0,k=0;
  char S[5];
  
  scanf("%s",S);
  for(i=2;i<4;i++){
    if(S[0] == S[i])
      j++;
    else if(S[1] == S[i])
      k++;
  }
  if(j == k && k==1)
    puts("Yes");
  else
    puts("No");
  return 0;
}