#include<stdio.h>
#include<string.h>
#define min(a,b) (a<b?a:b)

int main(void){
  char s[100001];
  scanf("%s",s);
  int i,len=strlen(s),r=0,b=0;
  for(i=0;i<len;i++)
    (s[i]-'1')?b++:r++;

  printf("%d",2*min(r,b));
  return 0;
}
