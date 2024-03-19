#include<stdio.h>
#include<string.h>

int main(){

char *s1 = "ABC";
char *s2 = "ARC";
char s[5];
char *s3 = s;

scanf("%s",s);

if(strcmp(s1,s3)==0){
  printf("ARC\n");
}else if(strcmp(s2,s3)==0){
  printf("ABC\n");
}

return 0;
}
