#include<stdio.h>
#include<math.h>

int main(void){
  int i,N,D,count=0;
  
  scanf("%d",&N);
  scanf("%d",&D);
  int x[N],y[N];
  double dis[N];
  
  for(i=0; i<N; i++){
    scanf("%d",&x[i]);
    scanf("%d",&y[i]);
  }
  
  for(i=0; i<N; i++){
    dis[i]=sqrt(pow(x[i],2)+pow(y[i],2));
    if(dis[i]<=D){
      count++;
    }
  }
  
  printf("%d",count);
  return 0;
}