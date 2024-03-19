#include<stdio.h>
#include<string.h>
int main(){
  char s[6]={};
  int a,k=0;
  scanf("%s",s);
  for(a=0;a<3;a++){
    if(s[a]=='1'){
      k++;
    }
  }
  printf("%d",k);
  return 0;
}