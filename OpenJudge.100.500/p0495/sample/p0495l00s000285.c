#include<stdio.h>
int main()
{
  char S[3];
  int i,count=0;
  for(i=0;i<3;i++)
  {
    scanf("%c",&S[i]);
  }
  for(i=1;i<3;i++)
  {
    if(S[0]==S[i])
    count+=1;
  }
  if(count==1)
  printf("Yes");
  else
  printf("No");
}