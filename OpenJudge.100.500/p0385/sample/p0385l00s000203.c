#include<stdio.h>
#include <string.h>

int main(){
  int i=0,x,l;
  char s[1001]={};

  while(1){
    scanf("%s",s);
    l = strlen(s);
    if(l==1 && s[0] == '0'){
      break;
    }
    x = 0;
    for(i=0;i<l;i++){
      x += s[i]-'0';
    }
    printf("%d\n",x);
  }

  return 0;
}
