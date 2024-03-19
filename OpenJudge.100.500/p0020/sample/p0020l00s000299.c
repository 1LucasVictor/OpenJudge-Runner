#include<stdio.h>
#include<math.h>

int main(){
	int k;
	double x1,x2,x3,x4,y1,y2,y3,y4;
	scanf("%d",&k);
	while(k--){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		if(fabs((y2-y1)*(x4-x3)-(y4-y3)*(x2-x1))<1e-10) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}