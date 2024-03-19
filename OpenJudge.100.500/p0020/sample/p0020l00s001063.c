#include<stdio.h>
int calc(double a,double b, double c,double d,double e,double f,double g,double h);

int main(){

	double a,b,c,d,e,f,g,h;
	int n;

	scanf("%d",&n);

	for(;n>0;n--){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f,&g,&h);
		if(calc(a,b,c,d,e,f,g,h)==1)printf("YES\n");
		else printf("NO\n");

	}
}

int calc(double a,double b, double c,double d,double e,double f,double g,double h){

	if((d-b)/(c-a)==(h-f)/(g-e))return 1;
	else return 0;


}