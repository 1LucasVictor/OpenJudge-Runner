#include<stdio.h>

int main(void){

	double x1,y1 , x2,y2 , x3,y3 , x4,y4;
	int n,i;

	scanf("%d",&n);


	for(i=0;i<n;i++){

		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1 , &x2,&y2 , &x3,&y3 , &x4,&y4);

		if( (y2-y1)/(x2-x1) == (y4-y3)/(x4-x3) )
			puts("YES");

		else
			puts("NO");


	}

	return 0;

}