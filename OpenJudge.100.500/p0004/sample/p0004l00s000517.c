#include <stdio.h>
int main(){
	int a, b, tmp, r, c, d;
	while(scanf("%d%d",&a,&b)!=EOF){
		c = a; d = b;
		while(1){
			if(b>a){tmp = a; a = b; b = tmp; }
			r = a % b;
			if(r == 0) break;
			a = b; b = r;
		}
		tmp = b*(c/b)*(d/b);
		printf("%d %d\n", b, tmp);
	}
	return 0;
}