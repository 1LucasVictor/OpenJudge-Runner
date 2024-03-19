#include <stdio.h>

int main(void){
	int a,b,c;

	scanf("%d",&a);

	while(scanf("%d %d %d",&a,&b,&c)!=EOF){

		a = a*a;
		b = b*b;
		c = c*c;

		if(a==b+c||c==a+b||b==c+a)
			puts("YES");
		else
			puts("NO");
	}
	return 0;
}