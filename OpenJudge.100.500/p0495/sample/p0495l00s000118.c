#include<stdio.h>
#include<string.h>
int main()
{
  char s[5];
  char s1[5]="BBB";
  char s2[5]="AAA";
  scanf("%s",s);
  if((strcmp(s,s2)==0)||(strcmp(s,s1)==0))
  {
    printf("No");
  }
  else
  {
    printf("Yes");
  }
  return 0;
}