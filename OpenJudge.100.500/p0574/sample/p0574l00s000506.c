#include <stdio.h>

int main(){
  char s[4];
  scanf("%s",s);
  int i,flag=0;
  
  for(i=0;i<3;i++){
    if(s[i]==s[i+1]){
      flag=1;
    }
  }
  if(flag==0)printf("Good\n");
  else printf("Bad\n");
  return 0;
}