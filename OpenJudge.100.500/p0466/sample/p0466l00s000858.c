#include<stdio.h>
#include<string.h>
int main(){
  int i,n;
  char s[11],t[11];
  scanf("%s %s",s,t);
  n=strlen(s);
  for(i=0;i<n;i++)
    if(s[i]!=t[i]){
      printf("No\n");
      return 0;
    }
  printf("Yes\n");
  return 0;
}
