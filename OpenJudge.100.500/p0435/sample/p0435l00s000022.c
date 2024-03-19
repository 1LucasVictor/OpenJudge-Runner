#include <stdio.h>
#include <math.h>

int main(void){
  int N,D;
  int i;
  int x,y;
  int count=0;
  int sum=0;
  double distance=0;
  
  scanf("%d %d\n",&N,&D);
  for(i=0; i<N; i++){
    scanf("%d %d",&x,&y);
    sum=x*x+y*y;
    distance=sqrt(sum);
    if(distance<=D){
      count++;
    }
  }
  printf("%d\n",count);
  return 0;
}
