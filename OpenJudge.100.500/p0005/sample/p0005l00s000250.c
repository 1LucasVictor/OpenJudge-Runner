#include<stdio.h>
int main(){

  char s[22]={'\0'};
  int i=0;
  fgets(s,21,stdin);

  while(s[i]!=0)i++;
  if(i!=0){
    i--;
    for(i--;i>=0;i--){
      printf("%c",s[i]);
    }
    printf("\n");
  }
  return 0;
}