#include <stdio.h>
int main(){
  char s[2000000],t[2000000];
  int i=0,j,k=0;
  scanf("%s",s);
  scanf("%s",t);
  while(s[i]){
    i++;}
  for(j=0;j<i;j++){
    if(s[j]==t[j]){
      k++;
    }
  }
  printf("%d",i-k);
  return 0;}