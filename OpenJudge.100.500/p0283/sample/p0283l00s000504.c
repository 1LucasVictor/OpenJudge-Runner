#include <stdio.h>
#define N 8
#define FREE 0
#define NFREE 1
int X[N][N];
int row[N],col[N],lef[2*N-1],rig[2*N-1];
void input (void);
void printBoard(void);
void recursive (int );
int main()
{
  int i,j,x,r,c;
  input();
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      X[i][j] =0;
    }
  }
  scanf("%d",&x);
  for(i=0;i<x;i++)
    {
      scanf("%d %d",&r,&c);
      X[r][c] =1;
      
    }
  recursive(0);

  return 0;
}


void input (void){
  int i,j;
  for(i=0;i<N;i++)
    {
      row[i]=FREE;
      col[i]=FREE;
    }
  for(j=0;j<2*N-1;j++)
    {
      lef[j]=FREE;
      rig[j]=FREE;
      
    }

}
void printBoard(void)
{
  int i,j;
  for(i=0;i<N;i++)
    {
      for(j=0;j<N;j++)
	{
	  if(X[i][j]){
	    if(row[i] !=j) return ;
	  }
	}
    }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++)
      {
	if(row[i]==j)printf("Q");
	else printf(".");
      }
    printf("\n");
  }
}
void recursive (int x)
{
  int i;
  if(x==N)
    {
      printBoard(); /*配置成功 */
      return;
    }
  for(i=0;i<N;i++)
    {
      if(NFREE ==col[i] || NFREE ==lef[x+i] || NFREE ==rig[x-i+N-1]) continue;
      row[x]=i;
      col[i]=NFREE;
      lef[x+i]=NFREE;
      rig[x-i+N-1]=NFREE;
      
      recursive(x+1);
      row[x]=FREE;
      col[i]=FREE;
      lef[x+i]=FREE;
      rig[x-i+N-1]=FREE;
    }
}

