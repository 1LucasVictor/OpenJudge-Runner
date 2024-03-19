#include <stdio.h>

int main()
{
  char s[200001], t[200001];
  scanf("%s%s", s, t);
  int i=0;
  int ans=0;
  while(s[i]){
    if(s[i]!=t[i]) ans++;
    i++;
  }
  printf("%d\n",ans);
  return 0;
}