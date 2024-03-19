#include<stdio.h>
#include<string.h>
int main(){
  char s[100002];
  scanf("%s",s);
  int len=strlen(s);
  int i,white=0,black=0;
  for(i=0;i<len;i++)
    if(s[i]=='0')
      white++;
    else
      black++;
  if(white<black)
    printf("%d\n",white*2);
  else
    printf("%d\n",black*2);
  return 0;
}
