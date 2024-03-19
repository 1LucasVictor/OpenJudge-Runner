#include <stdio.h>

#define MAX 200001

int main()
{
  char s[MAX];
  char t[MAX];
  int count=0, k;
  
  scanf("%s",s);
  scanf("%s",t);
  k=strlen(s)-1;
  
  while(k>0){
    if(s[k]!=t[k])
      count++;
    k--;
  }
  
  printf("%d\n",count);
  
  return 0;
}
