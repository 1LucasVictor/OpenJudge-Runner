#include<stdio.h>
#include<string.h>

int main()
{
int num=0,i;
char a[3]={};
  scanf("%s",a);
  for(i=0;i<=3;i++)
  {
   if(a[i]=='1'){num++;} 
  }
  printf("%d\n",num);
  return 0;
}