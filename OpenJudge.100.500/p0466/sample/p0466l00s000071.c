#include<stdio.h>

int main(void){
  char s[10],t[11];
  int i;
  int check=0;

  scanf("%s",s);
  scanf("%s",t);

  for(i=0;i<strlen(s);i++){
    if(s[i]!=t[i]){
      check++;
      break;
    }
  }
  if(strlen(t)-strlen(s)!=1){
    puts("No");
  }else if(check!=0){
    puts("No");
  }else{
    puts("Yes");
  }
  return 0;
}
