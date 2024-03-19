#include <stdio.h>
#define INFNITY 900000
#define N 100
#define W 0
#define G 1
#define B 2


int data[N][N];

int prim(int);

int main(){
  int n,i,j;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&data[i][j]);
      if(data[i][j]==-1){
      data[i][j]=INFNITY;
      }
    }
  }

  i=prim(n);
   
   printf("%d\n",i);

  return 0;
}


int prim(int n){//プリム                                                             
  int i,p[N],d[N],color[N],minv,u,sum=0;

  for(i=0;i<n;i++){
    d[i]=INFNITY;
    p[i]=-1;
    color[i]=W;
      }

     d[0]=0;



  while(1){
    minv=INFNITY;
    u=-1;

    for(i=0;i<n;i++){
      if(minv>d[i]&&color[i]!=B){
        u=i;
        minv=d[i];
      }
    }

    if(u==-1) break;

    color[u]=B;
    for(i=0;i<n;i++){
      if(color[i]!=B && data[u][i]!=INFNITY){
        if(d[i]>data[u][i]){
          d[i]=data[u][i];
          p[i]=u;
          color[i]=G;
        }
      }
    }
  }
    for(i=0;i<n;i++){
      if(p[i]!=-1) sum=sum+data[i][p[i]];
    }
  

return sum;
  }




