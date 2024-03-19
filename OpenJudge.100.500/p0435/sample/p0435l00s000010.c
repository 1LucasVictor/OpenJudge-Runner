#include<stdio.h>
#include<math.h>

#define f(X,Y) ((X)*(X)+(Y)*(Y))
int main(void){
	double X,Y;
  	double L;
  	int N;
  	double D;
  	scanf("%d %lf",&N,&D);
  	int count;
  	count = 0;
  	for(int i=0; i < N; i++){
    	scanf("%lf %lf",&X,&Y);
      	L = sqrt(f(X,Y));
        if( L <= D )
          count++;
    }
  printf("%d\n",count);
}