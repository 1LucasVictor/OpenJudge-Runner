#include <stdio.h>
#include <math.h>
#define N 8
#define NOTFREE 10
#define FREE 0
void putQ(int);
int r,c,col[N],row[N],dpos[2*N],dneg[2*N],C[N][N];
int main(){
  int n,i,j,k;
  for(j=0;j<N;j++){
    col[j]=row[j]=FREE;
    }
  for(j=0;j<2*N;j++){
    dpos[j]=dneg[j]=FREE;
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      C[i][j]=FREE;
    }
  }
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d%d",&r,&c);
    C[r][c]=NOTFREE;
    
    }
     
    
  putQ(0);

  return 0;
}

void putQ(int i){
   int k,j,u,al;
  
  
 
  if(i==N){
    for(j=0;j<N;j++){
      for(k=0;k<N;k++){
	if(C[j][k]==NOTFREE)
	  if(row[j]!=k)
	    return ;
      }
    }
    for(j=0;j<N;j++){
      for(k=0;k<N;k++){
	if(row[j]==k)printf("Q ");
	else {
	   printf(". ");
	}
	
      }
      printf("\n");
    }
    
  }
 
    for(j=0;j<=N-1;j++){
    if(col[j]==NOTFREE||dpos[i+j]==NOTFREE||dneg[i-j+N-1]==NOTFREE)
      continue;
    
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOTFREE;
    putQ(i+1);
    col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
 
  }
}
      