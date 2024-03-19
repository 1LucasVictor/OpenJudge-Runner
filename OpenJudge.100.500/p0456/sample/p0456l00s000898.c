#include<stdio.h>
#include<string.h>
int main(){
  int count=0;
  char s[200001],t[200001];
  scanf("%s",s);
  scanf("%s",t);
  for(int i=0;i<strlen(s)+1;i++){
    if(s[i]!=t[i]){
      count=count+1;
      }
    }
  printf("%d",count);
  }
