#include <stdio.h>
#include <math.h>
#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2

int prim(void);

int n, A[N][N];

int main()
{
  int i, j;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&A[i][j]);
    }
  }

  printf("%d\n",prim());
  return 0;
}

int prim()
{
  int i, j, color[n], mg[n], p[n], mc, place, to, sum=0;

  for(i=0;i<n;i++){
    color[i]=WHITE;
    mg[i]=2001;
  }
  mg[0]=0;
  p[0]=-1;

  while(1){
    /* printf("k\n");*/
    mc=2001;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && mg[i]<mc){
	mc=mg[i];
	place=i;
      }
    }

    if(mc==2001) break;

    color[place]=BLACK;

    for(to=0;to<n;to++){
      if(color[to]!=BLACK && A[place][to]!=-1){
	if(A[place][to]<mg[to]){
	  mg[to]=A[place][to];
          p[to]=place;
	  color[to]=GRAY;
	}
      }
    }
    for(i=0;i<n;i++){
      /* printf("%d\n",mc);*/
    }
     sum+=mc;
  }
    return sum; 
}

