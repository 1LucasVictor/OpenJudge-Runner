#include <stdio.h>

void calc(float matrix[],float ans[]){
	float det = matrix[0]*matrix[3]-matrix[1]*matrix[2];
	float tmp[4] = {matrix[3], -matrix[1],-matrix[2],matrix[0]};
	float atmp[2] = {ans[0], ans[1]};
	ans[0] = (atmp[0]*tmp[0]+atmp[1]*tmp[1])/det;
	ans[1] = (atmp[0]*tmp[2]+atmp[1]*tmp[3])/det;
	if(ans[0]<0.0001 && ans[0]>-0.001){
		ans[0] = ans[0]*-1;
	}
	if(ans[1]<0.0001 && ans[1]>-0.001){
		ans[1] = ans[1]*-1;
	}
	return;
}

int main(){
	float m[4];
	float a[2];
	while(scanf("%f %f %f %f %f %f", &m[0],&m[1],&a[0],&m[2],&m[3],&a[1])!=EOF){
		calc(m, a);
		printf("%.3f %.3f\n", a[0], a[1]);
	}
	return 0;
}