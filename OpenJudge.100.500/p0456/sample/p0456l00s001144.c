#include<stdio.h>
#include<string.h>

int main(void){
  int i, count = 0;
  char s[200010],t[200010];
  scanf("%s",s);
  scanf("%s",t);
  int n = strlen(s);
  for(i=0;i<n;i++){
    if(s[i] != t[i]){
      count++;
    }
  }
  printf("%d", count);
  
  return 0;
}