#include <stdio.h>
#include <stdlib.h>
#define N 8
void PutQueens(int ,int *c,int *,int *, int *);
int main(){
 
  int *row;
  int *col;
  int *dpos;
  int *dneg;
  int i,j,n,a,b;

  
  row=malloc(N*sizeof(int));
  col=malloc(N*sizeof(int));
  dpos=malloc(N*sizeof(int)*2);
  dneg=malloc(N*sizeof(int)*2);
 
  for(i=0;i<N;i++)
    {
      row[i]=-1;
      col[i]=-1;
    }
   for(i=0;i<N*2;i++)
    {
      dpos[i]=-1;
      dneg[i]=-1;
      
    }
    scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d%d",&a,&b);
      
      row[a]=b;      
      col[b]=1;     
      dpos[a+b]=1;      
      dneg[a-b+(N-1)]=1;
      }
  
  
  PutQueens(0,col,dpos,dneg,row);
  
  return 0;
}
void PutQueens(int i,int *col,int *dpos, int *dneg, int *row){
  int j,k;
  
    if(i == N)
      {
	for(k=0;k<N;k++)
	  {
	    for(j=0;j<N;j++)
	      {
		if(j==row[k]) printf("Q");
		else
		  {
		    printf(".");
		  }
	      }
	    printf("\n");
	  }
      }
    else {
      if(row[i]!=-1)
	{
	  PutQueens(i+1,col,dpos,dneg,row);
	  return;
	}
      for(j=0;j<N;j++)
	{
	  if(col[j] == 1 || dpos[i+j] == 1 || dneg[i-j+(N-1)] == 1)
	    {
	      continue;
	    }
	  else{
	    row[i] = j;
	    col[j] = 1;
	    dpos[i+j] = 1;
	    dneg[i-j+N-1] = 1;
	    PutQueens(i+1,col,dpos,dneg,row);
	    col[j] = -1;
	    dpos[i+j] = -1;
	    dneg[i-j+N-1] = -1;
	    row[i]=-1;
	  }
	}
      return;
    }
    
  
}

