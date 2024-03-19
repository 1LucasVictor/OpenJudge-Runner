#include <stdio.h>
int chk(
	double x1,double y1,
	double x2,double y2,
	double x3,double y3,
	double x4,double y4
	);
int main(){

	double x1,y1,x2,y2,x3,y3,x4,y4;
	int sn;
	int i;

	scanf("%d",&sn);
	for(i=0;i<sn;i++){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		printf(chk(x1,y1,x2,y2,x3,y3,x4,y4)?"YES\n":"NO\n");

	}




	return 0;
}


int chk(
	double x1,double y1,
	double x2,double y2,
	double x3,double y3,
	double x4,double y4	){
	if(((x1-x2)*(y3-y4)-(y1-y2)*(x3-x4))==0) return 1;
	return 0;
}