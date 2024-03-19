#include<stdio.h>
#include<string.h>

char c;
char exchange(char c){
  if('A' <= c && c <= 'Z') {
    return c + ('a' - 'A');
  }
  if('a' <= c && c <= 'z') {
    return c + ('A' - 'a');
  }
  
  return c;
}

int main(void){
int i;
int len;
char s[4096];
scanf("%[a-z,A-Z, .0-9]", s);

  len = strlen(s);
  for(i = 0; i < len;i++) {
    s[i] = exchange(s[i]);
  }
  if(s[i] == ' '){
  printf(" ");
  }
  else{
  printf("%s",s);
  }

printf("\n");
return 0;
}

