#include<stdio.h>

int main(){
  int i,j,k,n,u,v,a,min;
  int M[100][100],d[100],p[100];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j]=1000000;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d %d",&v,&a);
      M[u][v]=a;
    }
  }
  for(i=0;i<n;i++){
    d[i]=1000000;
    p[i]=0;
  }
  d[0]=0;
  p[0]=2;
  while(1){
    min=1000000;
    u=-1;
    for(i=0;i<n;i++){
    if(min > d[i] && p[i] != 1){
      u=i;
      min=d[i];
    }
  }
  if(u==-1){
    break;
  }
  p[u]=1;
  for(i=0;i<n;i++){
    if(p[i] != 1 && M[u][i] != 1000000){
      if(d[i] > d[u]+M[u][i]){
        d[i]=d[u]+M[u][i];
        p[i]=2;
      }
    }
  }
}
for(i=0;i<n;i++){
  if(d[i]==1000000){
  printf("%d -1\n",i);
}
else{
  printf("%d %d\n",i,d[i]);
}
}
return 0;
}

