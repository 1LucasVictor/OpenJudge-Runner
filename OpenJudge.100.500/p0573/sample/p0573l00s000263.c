#include <stdio.h>

int main(void)
{
  char S[4];
  scanf ("%s",S);
  char char1=0,char2=0,charn1=0,charn2=0,char2_able=0,error=0;
  
  char1=S[0];
  charn1++;
  if (S[1]!=char1)
  {
    char2=S[1];
    char2_able=1;
    charn2++;
  }
  else if (S[1]==char1)
  {
    charn1++;
  }
  if (S[2]==char1)
  {
    charn1++;
  }
  else if (S[2]==char2)
  {
    charn2++;
  }
  else if (S[2]!=char1&&S[2]!=char2&&char2_able==0)
  {
    char2=S[2];
    char2_able=1;
    charn2++;
  }
  else error=1;
  
  if (S[3]==char1)
  {
    charn1++;
  }
  else if (S[3]==char2)
  {
    charn2++;
  }
  else if (S[3]!=char1&&S[3]!=char2&&char2_able==0)
  {
    char2=S[3];
    char2_able=1;
    charn2++;
  }
  else error=1;
  
  if (error==1) printf("No");
  else if (charn1==2&&charn2==2) printf("Yes");
  else printf("No");
  return 0;
}