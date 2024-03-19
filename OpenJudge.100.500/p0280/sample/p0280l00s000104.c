#include<stdio.h>
#define N 500
static const int INFTY = (1<<21);
int main(){
  int t,i,j,f,l,q,sum,minv;
  int A[N][N],d[N],h[N],w[N];
  scanf("%d",&t);
  for(i=0;i<t;i++){
    for(j=0;j<t;j++){
      scanf("%d", &q);
      A[i][j] = (q==-1)?INFTY:q; }
  }
  for(i=0; i<t; i++){
    d[i]=INFTY;
    h[i]=-1;
    w[i]=0;
  }
  d[0]=0;
  while(1){
    minv=INFTY;
    f=-1;
    for(i=0; i<t; i++){
      if(minv>d[i] && !w[i]){
	f=i;
	minv=d[i];
      }
    }
    if(f==-1)
      break;
    w[f]=1;
    for(l=0;l<t;l++){
      if(!w[l]&&A[f][l] != INFTY ){
	if(d[l]>A[f][l]){
	  d[l]= A[f][l];
	  h[l]=f;
	}
      }
    }
  }
  sum=0;
  for(i=0;i<t;i++){
    if(h[i]!=-1){
      sum += A[i][h[i]];
    }
  }

  printf("%d\n",sum);

  return 0;
}

