#include<stdio.h>
int main(void){
  char s[4];
  int i,c=0;
  scanf("%s",s);
  for(i=0;i<=2;i++){
    if(s[i]==s[i+1]){
      c=1;
      break;
    }
  }
  if(c==0)
    printf("Good");
  else
    printf("Bad");
  return 0;
}