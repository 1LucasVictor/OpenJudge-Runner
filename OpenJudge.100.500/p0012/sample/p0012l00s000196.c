#include<stdio.h>
int main(){
  int s[11];
  int r=0,a;
  while(scanf("%d",&a)!=EOF){
    if(a)s[r++]=a;
    else printf("%d\n",s[--r]);
  }
  return 0;
}
  
    