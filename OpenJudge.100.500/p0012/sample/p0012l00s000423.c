#include<stdio.h>
int main(){
  int n,s[12],r=0;
  while(scanf("%d",&n)!=EOF){
    if(n)s[r++]=n;
    else printf("%d\n",s[--r]);
  }
  return 0;
}