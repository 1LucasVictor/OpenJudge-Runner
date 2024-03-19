#include<stdio.h>
#include<math.h>
int main(){
	int N;
	double D,x,y;
	int n=0;
	scanf("%d %lf",&N,&D);
	for(int i=0;i<N;i++){
		scanf("%lf %lf",&x,&y);
		if(sqrt(x*x+y*y)<=D)
		n++;
	}
	printf("%d\n",n);
}