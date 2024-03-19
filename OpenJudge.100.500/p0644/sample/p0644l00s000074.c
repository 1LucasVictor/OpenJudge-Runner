#include<stdio.h>

int main()
{
  char s1,s2,s3;
  int ans=0;
  scanf("%c%c%c",&s1,&s2,&s3);
  if(s1=='1')ans++;
  if(s2=='1')ans++;
  if(s3=='1')ans++;

  printf("%d",ans);

  return 0;
}