#include<stdio.h>
int main(void)
{
  char S[4];
  char c;
  int k;
  scanf("%s%s%s",&S[0],&S[1],&S[2]);
  c=S[0];
  if(c==S[1]&&c==S[2])
  {
    printf("NO\n");
  }
  else
  {
    printf("Yes\n");
  }
return 0;
}