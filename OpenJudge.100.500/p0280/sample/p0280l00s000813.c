#include<stdio.h>

int main()
{
  int i,j,n,count=0;
  int A[101][101],B[101],C[101],D[101],a,ii;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&A[i][j]);
    }
  }

  for(i=0;i<n;i++){
    B[i]=0;
    D[i]=-1;
    C[i]=2001;
  }
  C[0]=0;

  while(1){
    a=2001;
    for(i=0;i<n;i++){
      if(B[i]!=2 && C[i]<a){
        a=C[i];
        ii=i;
      }
    }
    if(a==2001)break;
    B[ii]=2;
    for(i=0;i<n;i++){
      if(A[ii][i]!=-1 && B[i]!=2 && A[ii][i]<C[i]){
	D[i]=ii;
	C[i]=A[ii][i];
	B[i]=1;
      }
    }
  }

  for(i=0;i<n;i++){
    if(D[i]!=-1)count+=A[i][D[i]];
    }
  printf("%d\n",count);
  return 0;
}

