#include<stdio.h>

void main(){
  char s[16];
  scanf("%s",&s);
  
  char t[16];
  scanf("%s",&t);
  
  int tf=0;
  
  int i;
  for(i=0;i<16;i++){
    if(s[i]=='\0'){
      if(t[i]!='\0'&&t[i+1]=='\0'){
        tf=1;
        break;
      }else{
        tf=0;
        break;
      }
    }else if(s[i]!=t[i]){
      tf=0;
      break;
    }
  }
  if(tf==0)
    printf("No\n");
  else
    printf("Yes\n");
}