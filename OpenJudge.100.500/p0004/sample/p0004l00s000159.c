#include <stdio.h>
int main(){

	int a,b,c,a0,b0;
	int gcd;
	double lcm;

	for(;scanf("%d %d",&a,&b)!=EOF;){

		a0=a;
		b0=b;

		if(a<b){
			c=a,a=b,b=c;
		}

		gcd=1;
		if(a==0 || b==0){
			gcd=0;
			lcm=0;
		} else {
			while(a%b!=0){
				c=b;
				b=a%b;
				a=c;
			}
			gcd=b;
			lcm=((double)a0*(double)b0)/(double) gcd;
		}
		printf("%d %.f\n",gcd,lcm);
	}

	return 0;
}