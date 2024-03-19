#include <stdio.h>
#include <stdlib.h>
int main(void){
  char s[100];
  char s1[100]="ABC";
  int i=0;
  int flag=0;
  scanf("%s",s);
  while(s[i]!='\0' && s1[i]!='\0'){
    if(s[i]!=s1[i]){
      flag=1;
      break;
    }
    i++;
  }
  if(flag==1){
    printf("ABC");
  }else if(flag==0){
    printf("ARC");
  }
  return 0;
}
