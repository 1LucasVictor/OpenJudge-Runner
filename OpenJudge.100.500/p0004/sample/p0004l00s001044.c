#include <stdio.h>
#include <stdlib.h>
int LCM (int a ,int b);
double GCD (int a, int b);

int main(int argc, char *argv[]) {
	int a, b,lcm;
	double gcd;
	while ((scanf("%d %d",&a,&b))!=EOF)	{
			if(a>=b)	{
				lcm=LCM(a,b);
				printf("%d ",lcm);
				gcd=GCD(a,b);
			}
	}
	return 0;
}
int LCM (int a ,int b)	{
	int k;
		while (a%b!=0)	{
			k=a%b;
			a=b;
			b=k;
		}
		return b;
	} 
double GCD (int a, int b)	{
	int l=LCM(a,b);
	double c,d;
	double answer;
	c=a/l;
	d=b/l;
	answer=c*d*l;
	printf("%.lf\n",answer);
}
	 
