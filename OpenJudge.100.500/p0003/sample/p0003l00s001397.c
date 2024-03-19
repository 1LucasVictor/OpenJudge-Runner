#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979323

//void quick(int *,long long,long long);
//int comp(char *a,char *b);

int main(){
	
	float a,b,c,d,e,f;
	
	while(scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f)!=EOF){
		/*if((c*e-b*f)/(a*e-b*d)<0.00001&&(c*e-b*f)/(a*e-b*d)>-0.00001)
			printf("0.000 ");
		else*/
			printf("%.3f ",(c*e-b*f)/(a*e-b*d));

		/*if((a*f-d*c)/(a*e-b*d)<0.00001&&(a*f-d*c)/(a*e-b*d)>-0.00001)
			printf("0.000\n");
		else*/
			printf("%.3f\n",(a*f-d*c)/(a*e-b*d));
	}
	//for(i=0;i<=10000000000;i++);
	return 0;
}