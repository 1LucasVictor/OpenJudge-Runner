#include<stdio.h>
#include<string.h>
int main(){
  int a,b=0,c=0;
  char s[100001];
  scanf("%s",s);
  a=strlen(s);
  for(int i=0; i<a; i++){
    if(s[i]=='0'){
      b++;
    }else{
      c++;
    }
  }
  printf("%d",b<c?b*2:c*2);
  return 0;}