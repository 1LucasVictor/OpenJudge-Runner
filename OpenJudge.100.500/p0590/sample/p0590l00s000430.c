#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i,j,k[6],f=0;
  for(i = 0; i < 6; i++) scanf("%d",&k[i]);
  //一番遠いところからループを回す。
  //全探索
  for(i = 4; i > 0; i--)
  {
    if(f==1) break;
    for(j = i-1; j >= 0; j--)
    {
      if(f==1) break;
      if(k[i]-k[j]>k[5]) 
      {
        f++;
        printf(":(");
        break;
      }
      
    }
    
  }
  if(f==0) printf("Yay!");

  return 0;
}