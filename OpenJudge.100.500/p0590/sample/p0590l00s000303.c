#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int i,j,k[6];
  for(i = 0; i < 6; i++) scanf("%d",&k[i]);
  //一番遠いところからループを回す。
  //全探索
  for(i = 4; i > 0; i--)
  {
    for(j = i-1; j >= 0; j--)
    {
      if(k[i]-k[j]>k[5]) 
      {
        printf(":(");
        exit(1);
      }
    }
  }
  printf("Yay!");
  return 0;
}