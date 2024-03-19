#include<stdio.h>
#include<stdbool.h>
static const int MAX=500;
static const int INFTY=(1<<21);

int main(void){
  int n,i,j,e,sum=0,M[MAX][MAX],v,res,Max;
  bool used[MAX];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    used[i]=false;
    for(j=0;j<n;j++){
      scanf("%d",&e);
      M[i][j]=(e==-1)?INFTY:e;
    }
  }
  for(i=0;i<n;i++){
    res=0;
    v=0;
    Max=50000;
    for(j=0;j<n;j++){
      if(used[j]!=true && (M[i][j]<Max)){
	v=j;
	Max=res=M[i][j];
      }
    }
    sum+=res;
    used[v]=true;
  }
  printf("%d\n",sum);
  return 0;
}