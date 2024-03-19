#include<stdio.h>
int main(void){
	int n;
	int i;
	double x1,y1,x2,y2,x3,y3,x4,y4;
	double a1,a2;
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		if(x2 == x1 && x4 == x3){
			printf("YES\n");
			continue;
		}
		if(x2 == x1 && x4 != x3){
			printf("NO\n");
			continue;
		}
		if(x2 != x1 && x4 == x3){
			printf("NO\n");
			continue;
		}
		a1 = (y2 - y1) / (x2 - x1);
		a2 = (y4 - y3) / (x4 - x3);
		if(a1 == -0.0){
			a1 = 0.0;
		}
		if(a2 == -0.0){
			a2 = 0.0;
		}
		if(a1 != a2){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
	}
	return 0;
}