#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
 
#define WHITE 0
#define BRACK 1
#define GRAY 2
#define NILL -1
 
static const int N = 100;
static const int INFTY = (1<<21);
 
int check(int x,int A[],int c){
  int i;
  for(i=0;i<c;i++){
    if(A[i]==x)return 0;
  }
  return 1;
}
 
main(){
  int d[N];
  int e1[N];
  int v2[N];
  int B[N][N];
  int n;
  int i, j, e, sum=0,k,w,v1;
  int p[N];
  int flag=0,
    min=INFTY,
    v[N],
    c=1,
    F[N],
    l=0,
    Min[N],a;
  Min[0]=0;
 
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      B[i][j]=INFTY;
    }
  }
 
  scanf("%d",&n);
   
  for(i=0;i<n;i++){
    scanf("%d%d",&v2[i],&e1[i]);
    for(j=0;j<e1[i];j++){
      scanf("%d%d",&v1,&w);
      B[i][v1]=w;
      
    }
  }
 
  for(i=0;i<n-1;i++){
    min=INFTY;
    for(k=0;k<c;k++){
      for(j=0;j<n;j++){
    if(check(j,v,c)==1&&min>B[v[k]][j]){
      min=B[v[k]][j];
      flag=j;
    }
    }
    }
     
    v[c]=flag;
    p[v[i]]=v[c];
 
    c++;
    sum+=min;
    Min[flag]=sum;
  }
 
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(B[i][j]<=Min[i]) {
    d[i]=B[i][j];
    break;
      }
      else{
    d[i]=Min[i];
    break;
      }
    }
  }
   
  for(i=0;i<n;i++)printf("%d %d\n",i,d[i]);
   
  return 0;
}