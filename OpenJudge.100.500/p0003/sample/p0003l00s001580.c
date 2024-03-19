#include<stdio.h>
int main(void){
	float a,b,c,d,e,f,x,y;
	char s[128];

	while(fgets(s,sizeof(s),stdin)!=NULL){

		sscanf(s,"%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);

		y = ((c * d)- (f * a)) / ((b * d) - (e * a));
		x = (c - (b * y)) / a;

		printf("%.3f %.3f\n",x,y);
		
	}

	return(0);
}