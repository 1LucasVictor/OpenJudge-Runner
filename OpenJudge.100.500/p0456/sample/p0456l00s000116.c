#include <stdio.h>
#include <string.h>
int main(void)
{
  int count=0,len,i;
  char a[300000],b[300000];

scanf("%s",a);
scanf("%s",b);
len = strlen(a);
for(i=0;i<len;i++)
{
  if(a[i] != b[i])
  {
    count++;
  }
}
printf("%d",count);
return 0;
}