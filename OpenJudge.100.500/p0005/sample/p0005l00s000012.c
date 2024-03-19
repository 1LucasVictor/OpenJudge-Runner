#include<stdio.h>
#include<string.h>

int main(void){
int i;
int len;
char s[4096];
scanf("%s", s);

  len = strlen(s);
  for(i = 1; i <= len;i++) {
    s[i];
  }
  for(i = len-1; i >= 0; i--){

  printf("%c",s[i]);
}
printf("\n");
return 0;
}
