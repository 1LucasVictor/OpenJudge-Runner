#include<stdio.h>
int main()
{
  int n=0;
  char s[3];
  scanf("%s", s);
  for(int i=0;i<3;i++)
  if(s[i]=='1') n++;
  printf("%d\n", n);
  return 0;
}