#include <stdio.h>


#define infty 500000
#define whi 0
#define gry 1
#define bla 2

static const int MAX = 500; 
static const int INFTY = (1<<21);



int impossiblemission(int key,int kazu1,int *stuff1){
  int left=0,right=kazu1,mid;
  while(left<right){
    mid=(left+right)/2;
    if(stuff1[mid]==key){
      return 1;
    }
    else if(key<stuff1[mid]){
      right=mid;
    }
    else {
      left=mid+1;
    }
  }
  return 0;
}

int prim(){
  int qwerty[MAX][MAX];
  int nk,abc[MAX][MAX];
  int uni,minvmin;
  int doctor[MAX],parent[MAX],cocoichi[MAX];

  for(int i=1;i<=nk;i++){
    doctor[i]=infty;
    parent[i]=-1;
    cocoichi[i]=whi;
  }

  doctor[1]=0;
  while(1){
    minvmin=infty;
    uni=-1;
    for(int i=1;i<=nk;i++){
      if(minvmin>doctor[i] && cocoichi[i] != bla){
	uni=i;
	minvmin=doctor[i];
      }
    }
    if(uni==-1)break;
    cocoichi[uni]=bla;
    for(int v=1;v<=nk;v++){
      if(cocoichi[v]!=bla && abc[uni][v]!=infty){
	if(doctor[v]>abc[uni][v]){
	  doctor[v]=abc[uni][v];
	  parent[v]=uni;
	  cocoichi[v]=gry;
	}
      }
    }
  }
  int sum=0;
  for(int i=1;i<=nk;i++){
    if(parent[i]!=-1){
      sum=sum+abc[i][parent[i]];
    }
  }
  return sum;
}

int main(void){ 
  int n, i, j; 
  int M[MAX][MAX]; 
  int d[MAX]; 
  int tmp[MAX]; 
  int m; 
  int u, k, c, v;

  
  scanf("%d", &n);
  for ( i = 0; i< n; i++ ){ 
    for ( j = 0; j < n; j++ ){ 
      M[i][j] = 0; 
    } 
  } 
  for ( i = 0; i< n; i++ ){ 
    for ( j = 0; j < n; j++ ){ 
      M[i][j] = INFTY; 
    } 
  } 
  for ( i = 0; i < n; i++ ){ 
    scanf("%d %d", &u, &k); 
    for ( j = 0; j < k; j++ ){ 
      scanf("%d %d", &v, &c); 
      M[u][v] = c; 
    } 
  } 
  for( i=0; i<n; i++ ){ 
    tmp[i]=0; d[i]=INFTY; 
  } 
  d[0]=0; m=INFTY; 
  while(1){ m=INFTY; u=-1; 
    for( i=0; i<n; i++ ){ 
      if(d[i]<m){
	if(tmp[i]==0){
	  u=i; 
	  m=d[i];
	}
      } 
    } 
    if(u==-1)break; 
    tmp[u]=1; 
    for( v=0; v<n; v++ ){ 
      if(d[v]>=d[u]+M[u][v]) d[v]=d[u]+M[u][v]; 
    } 
  } 
  for ( i = 0; i < n; i++ ) printf("%d %d\n", i, (d[i]==INFTY?-1:d[i])); 
  return 0; 
}

