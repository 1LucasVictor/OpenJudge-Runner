#include<stdio.h>
#define A 100
#define ARIA 1<<21
int N[A][A],p,B[A],C[A],D[A];

int mini(int x, int y){
  return (x>=y) ?y:x;
}


void kas(int s){
  int i;
  for(i=0;i<p;i++){
    C[i]=ARIA;
    B[i]=0;
  }
  C[s]=0;
  while(1){
    int u,v=-1;
    for(u=0;u<p;u++){
      if(B[u]==0 && (v==-1||C[u]<C[v]))v=u;
    }
    if(v==-1)break;
    B[v]=1;
    for(u=0;u<p;u++){
      if(B[u]!=1)C[u]=mini(C[u],C[v]+N[v][u]);
    }
  }
}

int main(){
  int i,j,k,v,c,u;
  scanf("%d",&p);

  for(i=0;i<p;i++){
    for(j=0;j<p;j++){
    N[i][j]=ARIA;
  }
}

for(i=0;i<p;i++){
  scanf("%d %d",&u, &k);
  for(j=0;j<k;j++){
    scanf("%d %d",&v, &c);
	    N[u][v]=c;
  }
 }

kas(0);
for(i=0;i<p;i++){
  printf("%d %d\n",i, C[i]);
    }

return 0;
}	   
    

