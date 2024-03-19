#include <stdio.h>
 
int G[100][100],d[100],v[100];
int getMST(int);
 
int main(){
  int n,i,j;
   
  scanf("%d",&n);
 
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&G[i][j]);
    }
  }
  printf("%d\n",getMST(n));
 
  return 0;
}
 
int getMST(int n){
  int i,j,k=1,min,minp,sum=0;
   
  d[0]=0;
  v[0]=1;
 
  for(i=1;i<n;i++) v[i]=0;
 
  while(1){
    min = 2001;
    for(i=0;i<k;i++){
      for(j=0;j<n;j++){
    if(G[d[i]][j]<min && G[d[i]][j] != -1 && v[j] != 1){
      min = G[d[i]][j];
      minp = j;
    }
      }
    }
     
    if(k==n) break;
    d[k] = minp;
    v[minp] = 1;
    sum += min;
    k++;
  }
 
  return sum;
}