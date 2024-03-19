#include<stdio.h>
int main(void)
{
  char a[3];
  int cnt=0;
  scanf("%s",a);
  if(a[0]=='1') cnt++;
  if(a[1]=='1') cnt++;
  if(a[2]=='1') cnt++;
  printf("%d\n",cnt);
  return 0;
}
