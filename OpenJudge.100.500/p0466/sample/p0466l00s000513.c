#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int max(int a,int b){return a>b?a:b;}
int min(int a,int b){return a<b?a:b;} 
int main(void)
{
  char s[11],t[11];
  int sl;
  
  scanf("%s %s",&s,&t);
  sl=strlen(s);
  
  if(strncmp(s,t,sl)==0)
   printf("Yes");
  else
    printf("No");
  
}
