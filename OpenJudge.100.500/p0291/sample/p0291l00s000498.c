#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n;
  int maxv,minv;
  int *R;

  scanf("%d",&n);
  R=malloc(n*sizeof(int));
  for(i=0;i<n;i++)
    {
      scanf("%d",&R[i]);
    }
  minv=R[0];
  maxv=R[1]-R[0];
  for(j=1;j<n;j++)
    {
      if(maxv<R[j]-minv)
	{
	  maxv = R[j]-minv;
	}
      if(minv>R[j])
	{
	  minv = R[j];
	}
    }
  printf("%d\n",maxv);
  return 0;
}
	  

