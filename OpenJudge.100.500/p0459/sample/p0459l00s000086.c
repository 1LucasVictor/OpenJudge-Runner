#include<stdio.h>

int main(void)
{
  int X , Y ;//xは動物の総数、yは足の総数
  
  scanf("%d %d",&X,&Y);
  
  int k,t;//kはカメの総数、tは鶴の総数
  
  int i,leg;
  
  if(Y == 2*X || Y == 4*X)
  {
    printf("Yes");
    return 0;
  }
  
  
  
  
  for(i = 0 ; i < X ; i++)
  {
    k = i;
    t = X - i;
    
    leg = 4*k + 2*t;
    
    if(Y == leg)
    {
      printf("Yes");
      return 0;
    }
  }
  
  printf("No");
  
  return 0;
}