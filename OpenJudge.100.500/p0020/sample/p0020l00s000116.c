#include <stdio.h>

int main(void){

	double x1, x2, x3, x4, y1, y2, y3, y4;
	double a1, a2;
	int ds, i;
	
	scanf("%d", &ds);
	
	for(i = 0; i < ds; i++){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
		a1 = (y2 - y1) / (x2 - x1);
		a2 = (y4 - y3) / (x4 - x3);
		if(a1 == a2){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	
	return 0;
}