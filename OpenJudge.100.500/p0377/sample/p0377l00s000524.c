#include<stdio.h>
int main(void)
{
  int i,j,n,no,trump[4][14];
  char shurui;

  for(i=0;i<4;i++)
    for(j=1;j<=13;j++)trump[i][j]=j;

  scanf("%d",&n);

//  for(i=1;i<=n;i++) scanf("%d %d",&no,&no);
  for(i=1;i<=n;i++){
    scanf(" %c %d",&shurui,&no);
// printf("p=%d %c %d\n",i,shurui,no);
    if(shurui=='S')trump[0][no]=0;
    else if(shurui=='H')trump[1][no]=0;
    else if(shurui=='C')trump[2][no]=0;
    else if(shurui=='D')trump[3][no]=0;
  }

  for(i=1;i<=13;i++)if(trump[0][i]!=0)printf("S %d\n",trump[0][i]);
  for(i=1;i<=13;i++)if(trump[1][i]!=0)printf("H %d\n",trump[1][i]);
  for(i=1;i<=13;i++)if(trump[2][i]!=0)printf("C %d\n",trump[2][i]);
  for(i=1;i<=13;i++)if(trump[3][i]!=0)printf("D %d\n",trump[3][i]);

  return 0;
}