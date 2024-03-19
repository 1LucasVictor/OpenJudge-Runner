#include <stdio.h>
#include <string.h>
int main(){
  int x=0;
  char s[11],t[12];
  scanf("%s",&s);
  scanf("%s",&t);
  for (int i=0; i<strlen(s);i++){
    if(s[i]!=t[i]){
      x = x+1;
    }
  }
  if(x==0){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
}