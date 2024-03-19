#include<stdio.h>
#include<string.h>

int main(void){
  char s[200000],t[200000];
  long long i=0,j=0,sl=0;
  scanf("%s",s);
  scanf("%s",t);
  sl=strlen(s);
  for(i=0;i<sl;i++){
    if(s[i]!=t[i]){
      j++;
    }
  }
  printf("%lld",j);
  return 0;
}