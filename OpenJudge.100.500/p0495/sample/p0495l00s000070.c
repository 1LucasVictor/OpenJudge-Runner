#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int max(int a,int b){return a>b?a:b;}
int min(int a,int b){return a<b?a:b;} 
int main(void)
{
  char s[3];
  scanf("%s",s);
  if(strcmp(s,"AAA")==0||strcmp(s,"BBB")==0)
    printf("No");
  else
    printf("Yes");
    
}