#include<stdio.h>
#include<string.h>
#include<ctype.h>
 
 
int main(){
 
  char s[200], t[200];
  int m, h, i, j;
 
  while(1){
    scanf("%s", s);
    if(s[0]=='-') break;
 
    scanf("%d", &m);
    for(i=0;i<m;i++){
      scanf("%d", &h);
      for(j=0;j<h;j++) t[j]=s[j];
      for(j=h;j<strlen(s);j++) s[j-h]=s[j];
      for(j=0;j<h;j++) s[strlen(s)-h+j]=t[j];
    }
    printf("%s\n", s);
  }
  return 0;
}
