#include<stdio.h>
int main()
{
  char s1,s2,s3;
  int a=0;
  scanf("%c%c%c",&s1,&s2,&s3);
  if(s1=='1')
    a++;
  if(s2=='1')
    a++;
  if(s3=='1')
    a++;
  printf("%d\n",a);
  return 0;
}