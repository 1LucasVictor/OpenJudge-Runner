#include<stdio.h>
#define N 101
#define W 2001
 
int main(){
  int A[N][N],B[N],key[N],p[N];
  int i,j,n,count=0,o,u=0;
 
  scanf("%d",&n);
 
  for(i=0 ; i<n ; i++){
    for(j=0 ; j<n ; j++){
      scanf("%d",&A[i][j]);
    }
  }
  
  for(i=0 ; i<n ; i++){
    B[i] = 0;
    p[i] = -1;    
    if(i==0)key[i] = 0;
    else key[i] = W;
  }  
  
  while(o != W){
    o = W;
    for(i=0 ; i<n ; i++){
      if(B[i]!=2 && key[i]<o){	
	o = key[i];
	u = i;
      }
    }
    
    B[u]=2;
    for(i=0 ; i<n ; i++){
      if(A[u][i] != -1 && B[i] != 2 && A[u][i]<key[i]){
	p[i] = u;
	key[i] = A[u][i];
	B[i] = 1;
      }
    }
  }
  
  for(i=0 ; i<n ; i++)
    if(p[i] != -1) count += A[i][p[i]];    
   
  printf("%d\n",count);
  
  return 0;
}