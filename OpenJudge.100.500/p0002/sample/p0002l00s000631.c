#include <stdio.h>

int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	while(n--){
		int tmp;
		scanf("%d %d %d",&a,&b,&c);
		if (a>b) {
			tmp = a;
			a = b;
			b = tmp;
		}
		if (b>c) {
			tmp = b;
			b = c;
			c = tmp;
		}
		if (a>b) {
			tmp = a;
			a = b;
			b = tmp;
		}
		if(a*a+b*b==c*c) printf("YES\n");
		else printf("NO\n");
	}
	return(0);
}
	