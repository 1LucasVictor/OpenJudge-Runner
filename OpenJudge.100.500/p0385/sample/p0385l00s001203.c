#include<stdio.h>
#include<string.h>
#define LEN 2000
int toSum(char*);
int main(void)
{
  char str[LEN];
  int sum;
  for(;;)
    {
      scanf("%s",str);
      sum=toSum(str);
      if(sum==0) break;
      else printf("%d\n",sum);
    }
  return 0;
}
int toSum(char *str)
{
  int i;
  int len=strlen(str);
  int ret=0;
  for(i=0;i<len;i++) ret+=str[i]-'0';
  return ret;
}
