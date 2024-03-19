#include<stdio.h>
int main(void)
{
  char S[5];
  int k;
  for(k=0;k<3;k++)
  {
  scanf("%s",&S[k]);
  }
  if(S[0]==S[1]&&S[0]==S[2])
  {
    printf("NO\n");
  }
  else
  {
    printf("Yes\n");
  }
return 0;
}