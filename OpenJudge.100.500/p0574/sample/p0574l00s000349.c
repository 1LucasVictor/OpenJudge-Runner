#include<stdio.h>
int main()
{
  char str[4];
  int flag=0;
  for(int i=0;i<4;i++)
  {
    scanf("%d",&str[i]);
  }
  for(int j=0;j<4;j++)
  {
    if(str[j]==str[j+1])
    {
      flag+=1;
    }
  }
  if(flag!=0)
  {
    printf("Bad");
  }else 
  {
    printf("Good");
  }
  return 0;
}