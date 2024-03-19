#include<stdio.h>
#include<string.h>

int main(){

  char s[11];
  char t[11];
  scanf("%s",s);
  scanf("%s",t);

  if(strstr(t,s)==NULL){
    printf("No");
  }else{
    printf("Yes");
  }


  return 0;
}
