#include <stdio.h>
#include <math.h>

int main(void){
  double D,X[100000],Y[100000];
  int i,N,ans=0;
  scanf("%d %lf",&N,&D);
  
  for(i=0;i<N;i++){
    scanf("%lf %lf",&X[i],&Y[i]);
  }

  for(i=0;i<N;i++){
	if(i+1,D>=sqrt(X[i]*X[i]+Y[i]*Y[i])){
      ans++;
    }
  }

  printf("%d",ans);
  
  
  return 0;
}