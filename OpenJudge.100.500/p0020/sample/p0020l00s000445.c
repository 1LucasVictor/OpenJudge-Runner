#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int i;
	double x1,y1,x2,y2,x3,y3,x4,y4;
	scanf("%d",&n);
	//printf("%llf",1e-10);
	for(i=0;i<n;i++){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		if((y2-y1)/(x2-x1)==(y4-y3)/(x4-x3)){
			puts("YES");
		}
		else puts("NO");
	}
	return 0;
}