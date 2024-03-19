#include<stdio.h>
#include<string.h>
int main(void){
char s[11];
  scanf("%s",&s);
  char t[12];
  scanf("%s",&t);
  //printf("%d\n",strlen(s));
  for(int i=0;i<strlen(s);i++){
   // printf("%c %c\n",s[i],t[i]);
    	if(s[i]==t[i])continue;
    else {
          printf("No");
             return 0;
                      }
  }
  printf("Yes");
  return 0;
}