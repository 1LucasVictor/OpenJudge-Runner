#include<stdio.h>
#include<string.h>
int main()
{
   char s[5];
   int count=0;
   scanf("%s", s);
  for(int i=0; i<strlen(s); i++){
  if(s[i]==s[i+1])
    count++;}
    if(count>=1)
    printf("Bad");
  else
    printf("good");
}
