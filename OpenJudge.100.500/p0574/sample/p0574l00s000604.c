#include<stdio.h>
int main(void)
{
  int i,count=0;
char s[4];
scanf("%s",s);
  for(i=0;i<4;i++)
  {
  if(s[i]==s[i+1])
    count=1;
  }
if(count==1)
  printf("Bad");
  else
    printf("Good");
return 0;
}