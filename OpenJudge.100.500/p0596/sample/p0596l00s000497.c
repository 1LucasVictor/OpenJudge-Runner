#include<stdio.h>

int main(void)
{
  char S[100001];
  scanf("%s",S);

  int counta = 0;
  int countb = 0;
  int i;
  for(i = 0; S[i] != '\0'; i++)
  {
    if(S[i] == '1')  counta++;
    else countb++;
  }
  int ans=0;
  
  ans = (counta>=countb)? countb: counta;
  printf("%d",2*ans);
  return 0;
}
