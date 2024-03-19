#include<stdio.h>

int main(){

	int i,n,flagX[2],flagY[2];
	double x[4],y[4],a[2];

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3]);
		flagY[0]=0;
		flagX[0]=0;
		flagY[1]=0;
		flagX[1]=0;
		a[0]=0;
		a[1]=0;

		if(x[0]-x[1]==0){
			flagY[0]=1;
			a[0]=0;
		}
		else if(y[0]-y[1]==0){
			flagX[0]=1;
			a[0]=0;
		}
		else{
			a[0]=(y[0]-y[1])/(x[0]-x[1]);
		}

		if(x[2]-x[3]==0){
			flagY[1]=1;
			a[1]=0;
		}
		else if(y[2]-y[3]==0){
			flagX[1]=1;
			a[1]=0;
		}
		else{
			a[1]=(y[2]-y[3])/(x[2]-x[3]);
		}

		if((flagX[0]==1 && flagX[1]==1) || (flagY[0]==1 && flagY[1]==1) || (a[0]==a[1])){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}


	return 0;
}