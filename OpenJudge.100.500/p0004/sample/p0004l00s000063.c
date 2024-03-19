#include<stdio.h>

/* prototype declaration */
void exec();
int GCD(int a, int b);
int LCM(int a, int b);

int main(int argc, const char *argv[])
{
	exec();
	return 0;
}

void exec()
{
	int a, b, gcd, lcm;
	while(scanf("%d%d",&a,&b) != EOF){
		gcd = GCD(a, b);
		lcm = LCM(a, b);
		printf("%d %d\n", gcd, lcm);
	}
}

int GCD(int a, int b)
{
	int mod;
	do{
		mod = a%b;
		a = b;
		b = mod;
	}while(mod);
	return a;
}

int LCM(int a, int b)
{
	int gcd = GCD(a, b), x = a/gcd, y = b/gcd;
	return x*y*gcd;
}