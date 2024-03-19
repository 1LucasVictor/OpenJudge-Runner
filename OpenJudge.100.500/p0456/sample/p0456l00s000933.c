#include <stdio.h>
char hantei(char *s,char *t){
  int n=0;
  while(*s){
    if(*s==*t){
      ;
    }else{
      *s=*t;
      n++;
    }
    *s++;
    *t++;
  }
  printf("%d",n);

}
int main(void){
  char s[10000];
  char t[10000];
  
  scanf("%s",s);
  scanf("%s",t);

  hantei(s,t);
  }