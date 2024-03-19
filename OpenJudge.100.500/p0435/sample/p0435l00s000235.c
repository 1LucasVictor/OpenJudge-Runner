#include<stdio.h>
#include<math.h>
int main(void){
  int N,D;
  int i,ans=0;
  int X[200000],Y[200000];
  long x,y;
  scanf("%d%d",&N,&D);
  for(i=0;i<N;i++)
    scanf("%d%d",&X[i],&Y[i]);
  for(i=N;i<200000;i++){
    X[i]=0;
    Y[i]=0;
  }
  for(i=0;i<N;i++){
    x=X[i];
    y=Y[i];
    if(sqrt(x*x+y*y)<=D){
      ans++;
    }
  }
  printf("%d\n",ans);
  return 0;
}