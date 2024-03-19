#include<stdio.h>
#include<string.h>
int main(){
  char S[100000],T[100000];
  scanf("%s",S);
  scanf("%s",T);
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