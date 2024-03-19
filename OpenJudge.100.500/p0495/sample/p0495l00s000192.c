#include<stdio.h>
int main(void)
{
  char S[5];
  char c;
  int k;
  for(k=0;k<3;k++)
  {
  scanf("%c",&S[k]);
  }
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