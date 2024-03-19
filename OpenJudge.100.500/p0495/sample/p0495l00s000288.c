#include<stdio.h>
int main(void)
{
  char S[5];
  char c;
  int k;
  scanf("%c%c%c",&S[1],&S[2],&S[3]);
  c=S[1];
  if(c==S[2]&&c==S[3])
  {
    printf("NO\n");
  }
  else
  {
    printf("Yes\n");
  }
return 0;
}