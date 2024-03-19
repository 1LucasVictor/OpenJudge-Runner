#include<stdio.h>
#include<string.h>
int main(){
  char c[201],n;
  int len,m,h,a,b,d,e;
  while(1){
    scanf("%s",c);
    if(strcmp(c,"-")==0)break;
    len=strlen(c);
    scanf("%d",&m);
    for(d=0;d<m;d++){
      scanf("%d",&h);
      for(a=0;a<h;a++){
    n=c[0];
    for(b=1;b<=len-1;b++){
      c[b-1]=c[b];
    }
    c[len-1]=n;
      }
    }
    printf("%s\n",c);
  }
  return 0;
}