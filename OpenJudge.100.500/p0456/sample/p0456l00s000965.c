#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
  char s[200001],t[200001];
  int a=0;
  int i;
  int l;
  scanf("%s",s);
  scanf("%s",t);
  l=strlen(s);
  for(i=0;i<l;i++){
    if(s[i]!=t[i]) a++;
  }
  printf("%d",a);
  return 0;
}
