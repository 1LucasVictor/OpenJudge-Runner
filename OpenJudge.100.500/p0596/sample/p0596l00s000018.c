#include<stdio.h>
#include<string.h>

int min(int x, int y){
  if(x<y){
    return(x);
  }else{
    return(y);
  }
}

int main(void){
  char s[100001];
  scanf("%s",s);
  int n=strlen(s);
  int red=0,blue=0;
  
  for(int i=0;i<n;i++){
    if(s[i]=='0'){
      red++;
    }else{
      blue++;
    }
  }
  
  printf("%d",min(red,blue)*2);
  
  return(0);
}