#include<stdio.h>
int main(){
  int i,ss=0,tt=0,e=0;
  char s[10],t[11];
  scanf("%s",s);
  scanf("%s",t);
  for(i=0;i<=11;i++){
    if(s[i]=='\0'){
      ss=i;
      break;
    }
  }
  for(i=0;i<=11;i++){
    if(t[i]=='\0'){
      tt=i;
      break;
    }
  }
  if(ss+1==tt){
    for(i=0;i<ss;i++){
      if(s[i]!=t[i]){e=1;}
    }
  }else{e=1;}
  if(e==0){printf("Yes\n");}
  else{printf("No\n");}
}