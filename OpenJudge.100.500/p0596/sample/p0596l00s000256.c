#include<stdio.h>
#include<string.h>
int min(int a,int b){
  if(a>b) return b;
  return a;
}

int main(void){
  char s[100001];
  int a=0,b=0,tmp,i;
  scanf("%s",s);
  for(i=0;i<strlen(s);i++){
    //printf("%c ",s[i]);
    if(s[i]=='1') a++;
    else if(s[i]=='0') b++;
  }
  tmp=min(a,b);
  printf("%d\n",2*tmp);
  return 0;
}