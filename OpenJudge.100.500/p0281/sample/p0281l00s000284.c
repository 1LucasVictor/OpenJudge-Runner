
#include<stdio.h>

 
int A[1000][1000], n, k, s, u, v;
void saitan(){
  int i,j,a[2000],minv,b[2000],c[2000];
  for(u=0;u <n;u++){
    b[u]=1000;
    c[u]=-1;
    a[u]=0;
  }
  b[0]=0;
   
  while(1){
    minv=1000;
    for(i=0;i<n;i++){
      if(a[i]!=1&&b[i]<minv){
    minv=b[i];
    u=i;
      
    }
    }
    if(minv==1000){
      break;
    }
    a[u]=1;
    for(v=0;v<n;v++){
      if(a[v]!=1&&b[u]+A[u][v]<b[v]&&A[u][v]!=-1){
    c[v]=u;
    b[v]=b[u]+A[u][v];
      }
    }
  }
 
  for(i=0;i<n;i++){
    if(b[i]!=1000){
      printf("%d %d\n",i,b[i]);
    }
  }
   
}

int main(){
 
  int i, j;
 
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j]=1000;
   }
  }
   
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      scanf("%d",&A[u][v]);
   }
  }
 
  saitan();
 
  return 0;
}
 