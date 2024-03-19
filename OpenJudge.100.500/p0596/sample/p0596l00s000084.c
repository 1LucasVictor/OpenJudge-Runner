#include<stdio.h>
#include<string.h>

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
  if(red<blue){
    printf("%d",red*2);
  }else{
    printf("%d",blue*2);
  }
  return(0);
}