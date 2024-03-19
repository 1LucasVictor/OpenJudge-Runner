#include<stdio.h>

int main(){
  char s[3];
  scanf("%s",s);
  
  int cnt=0;
  int i;
  for(i=0;i<3;i++){
    if(s[i]=='1'){
      cnt++;
    }
  }
  
  printf("%d",cnt);
  return 0;
}