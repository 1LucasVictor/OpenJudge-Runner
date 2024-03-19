#include <stdio.h>

int gcd(int x, int y){
	/* euclid algorithm */
    int r;
	while((r=x%y)!=0) x=y, y=r;
	return y;
}

int lcm(int x, int y){
    if(x == 0 || y == 0) return 0;
    return x/gcd(x, y)*y; /* ツ静ヲツづ謁ツ掛ツつッツづゥツづ暗ャツづェツづゥ */
}

int main(void){
	int a,b;
	while(~scanf("%d %d",&a,&b))
		printf("%d %d\n",gcd(a,b),lcm(a,b));
	return 0;
}