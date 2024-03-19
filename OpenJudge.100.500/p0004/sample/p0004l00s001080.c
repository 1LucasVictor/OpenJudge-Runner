#include <stdio.h>

int gcd(int a,int b){
	if(b == 0){
		return a;
	}

	a %= b;

	return gcd(b,a);
}

int lcm(int a,int b,int g){
	double a2,b2,g2;

	a2 = a*1.0;
	b2 = b*1.0;
	g2 = g*1.0;

	return (int)(a2/g2*b2);
}

int main(){
	int a,b,l,g;

	while(scanf("%d %d",&a,&b) != EOF){
		g = gcd(a,b);
		l = lcm(a,b,g);
		printf("%d %d\n",g,l);
	}

	return 0;
}