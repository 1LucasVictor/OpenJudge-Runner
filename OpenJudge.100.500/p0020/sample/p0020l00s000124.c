#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int i;
	double p[4][2];
	scanf("%d",&n);
	//printf("%llf",1e-10);
	for(i=0;i<n;i++){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf"
					,&p[0][0],&p[0][1],&p[1][0],&p[1][1]
					,&p[2][0],&p[2][1],&p[3][0],&p[3][1]);
		if(abs((p[1][1]-p[0][1])/(p[1][0]-p[0][0])-(p[3][1]-p[2][1])/(p[3][0]-p[2][0]))==0){
			puts("YES");
		}
		else puts("NO");
	}
	return 0;
}