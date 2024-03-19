#include<stdio.h>

#define NILL -1

static const int MAX = 500;
static const int INFTY = (1<<21);


int check(int x,int A[],int c){
  int i;
  for(i=0;i<c;i++){
    if(A[i]==x)return 0;
  }
  return 1;
}

main(){
  int n, i, j, e, sum=0,k;
  int M[MAX][MAX],p[MAX];
  int flag=0,
    min=INFTY,
    v[MAX],
    c=1,
    F[MAX],
l=0;

  v[0]=0;
  //  p[0]=NILL;
  for(i=1;i<MAX;i++){
    v[i]=NILL;
    //p[i]=NILL;
    }


  scanf("%d", &n);

  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      scanf("%d", &e);
      M[i][j] = (e==NILL)?INFTY:e;
    }
  }
  
  for(i=0;i<n-1;i++){
    min=INFTY;
    for(k=0;k<c;k++){
    //k=0;
      //if(k<c){
      for(j=0;j<n;j++){
	if(check(j,v,c)==1&&min>M[v[k]][j]){
	  min=M[v[k]][j];
	  //l=v[k];
	  flag=j;
	}
      }
      //printf("%d\n",min);
      //p[i]=v[k];
      //k++;
    }
    //printf("%d\n",min);
    //p[i]=v[c];
    // F[i]=min;
    // sum+=min;
    v[c]=flag;
    p[v[i]]=v[c];
    c++;
    //p[v[i]]=v[c-1];

    //v[c]=flag;
    sum+=min;
    //printf("%d %d %d %d\n",flag,min,p[i],v[i]);
  }

  
  /* for ( i = 0; i < n-1; i++ ){
    if ( M[i][p[i]] != INFTY ) sum += M[i][p[i]];
    printf("%d\n", sum);
    }*/
  
  
  printf("%d\n", sum);
  
  return 0;
}