#include <stdio.h>
#define N 1000
#define MIN 1000000
   int main(){
  int i,j,n,min,a,b,c;
  int x[N][N],y[N],z[N];
    
  scanf("%d",&n);
    
  for(i=0;i<n;i++){
    y[i]=0;
    z[i]=MIN;
    for(j=0;j<n;j++) x[i][j]=-1;
  }
  for(i=0;i<n;i++){
    scanf("%d %d",&a,&b);
    for(j=0;j<b;j++){
      scanf("%d",&c);
      scanf("%d",&x[a][c]);
    }
  }
  z[0]=0;
  while(1){
    min=MIN;
    for(i=0;i<n;i++){
      if(y[i]!=1&&z[i]<min){
        min=z[i];
        a=i;
      }
    }
    
    if(min==MIN) break;
    for(i=0;i<n;i++){
      if(x[a][i]!=(-1) && y[i]!=1 && z[a]+x[a][i]<z[i]) z[i]=z[a]+x[a][i];
    }
    y[a]=1;
  }
  for(i=0;i<n;i++) printf("%d %d\n",i,z[i]);
  return 0;
}