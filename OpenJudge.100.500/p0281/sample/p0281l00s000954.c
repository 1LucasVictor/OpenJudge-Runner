#include<stdio.h>
#define N 101
#define M 10000001
int main(){
  int i,j,total,count=0,a,b,c,d,min,k;
  int A[N][N],color[N],e[N],pi[N];
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      A[i][j]=-1;
  }
  }
  scanf("%d",&total);
  for(i=0;i<total;i++){
    scanf("%d%d",&a,&b);
    for(j=0;j<b;j++){
      scanf("%d%d",&d,&c);
      A[a][d]=c;
    }
  }
  for(i=0;i<total;i++){
    color[i]=0; pi[i]=-1; e[i]=M;
  }
  e[0]=0;
  while(1){
    min=M;
    for(i=0;i<total;i++){
      if(color[i]!=2 && e[i]<min){
        min=e[i]; k=i;
      }
    }
if(min==M)break;
    color[k]=2;
    for(i=0;i<total;i++){
      if(A[k][i]!=-1&&color[i]!=2&&(A[k][i]+e[k])<e[i]){
        pi[i]=k;e[i]=A[k][i]+e[k];color[i]=1;
         }
    }
  }
  for(i=0;i<total;i++)printf("%d %d\n",i,e[i]);
  return 0;
}
