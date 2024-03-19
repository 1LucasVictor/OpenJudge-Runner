#include<stdio.h>
int main(){
  int i;
  char c,x[1202];


  for(i=0;i<1201;i++){
    scanf("%c",&c);
    x[i]=c;
    if(c =='\n'){
      x[i+1]='\0';
      break;
    }
  }

  for(i=0;i<1201;i++){
    if('A'<=x[i] && x[i]<='Z'){
      x[i]=x[i]-'A'+'a';
    }else if('a'<=x[i] && x[i]<='z'){
      x[i]=x[i]-'a'+'A';
    }
  }
  printf("%s",x);
  return 0;
}