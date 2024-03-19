#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define ll long long

char s[212345],t[212345];

int main(){
  scanf("%s",s);
  scanf("%s",t);

  int ans=0;
  int len=strlen(s);
  for(int i=0;i<len;i++){
    if(s[i]!=t[i]) ans++;}
 
  
  
  printf("%d\n",ans);
  
  return 0;
}
