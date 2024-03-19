#include<stdio.h>
    
int main(){

	double a,b,c,d,e,f,kai1[4096],kai2[4096];
    int i=0,n;

	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){

		kai1[i]=(c*e/b-f)/(a*e/b-d);
		kai2[i]=(f*a/d-c)/(e*a/d-b);

		if((c*e/b-f)==0)kai1[i]=0;
		if((f*a/d-c)==0)kai2[i]=0;


		i++;
	}

	for(n=0;n<i;n++)printf("%.3lf %.3lf",kai1[n],kai2[n]);

    return 0;
}