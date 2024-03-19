#include<stdio.h>
int main(){
  char s[200010],t[200010];
  int i,c=0;
  scanf("%s %s",s,t);
  for(i=0;s[i];i++){
    if(s[i]-t[i])c++;
  }
  printf("%d\n",c);
  return 0;
}
