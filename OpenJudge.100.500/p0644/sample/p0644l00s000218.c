#include<stdio.h>
int main(void)
{
  char str[3];
  int cnt=0;
  scanf("%s",str);
  if(str[0]=='1')
    cnt++;
  if(str[1]=='1')
    cnt++;
  if(str[2]=='1')
    cnt++;
  printf("%d\n",cnt);
  return 0;
}
