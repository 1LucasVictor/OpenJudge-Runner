#include <stdio.h>
#include <math.h>

int main(){
	double N,D;
	int	count = 0;
	double X = 0;
	double Y = 0;
    
  scanf("%lf %lf",&N,&D);
  
    for(int i=0;i<N;i++){
       scanf("%lf %lf",&X,&Y);
       if(sqrt(X*X+Y*Y) <= D) count++;
    }
  
  printf("%d\n",count);
  return 0;
}