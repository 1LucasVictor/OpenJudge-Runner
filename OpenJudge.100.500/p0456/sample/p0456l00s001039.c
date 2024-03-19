#include<stdio.h>
int main(){
  char S[100],T[100];
  scanf("%s",&S);
  scanf("%s",&T);
  int n=strlen(S);
  int i;
  int j=0;
  for(i=0;i<n;i++){
    if(S[i]!=T[i]){
      j++;
    }
  }
  printf("%d",j);
}