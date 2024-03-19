#include <stdio.h>
#include <math.h>
int main(void){
  int N;
  int D;
  int i;
  int s=0;
  scanf("%d %d",&N,&D);
  for(i=0;i<N;i++){
    int x,y;
    double a,b;
    scanf("%d %d",&x,&y);
    a=pow(x,2.0)+pow(y,2.0);
    b=sqrt(a);
    if(b<=D){
      s=s+1;
    }
  }
  
  printf("%d\n",s);
  return 0;
}