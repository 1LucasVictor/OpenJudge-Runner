
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int a,b,c,n;
	scanf("%d",&n);
	while(n>0){
		scanf("%d %d %d",&a,&b,&c);
		if(a>=b && a>=c){
			if(a*a==b*b+c*c)printf("YES\n");
			else printf("NO\n");
		}
		else if(b>=a &&b>=c){
			if(b*b==a*a+c*c)printf("YES\n");
			else printf("NO\n");
		}
		else if(c>=a && c>=a){
			if(c*c==b*b+a*a)printf("YES\n");
			else printf("NO\n");
		}
		n--;
	}



	return 0;
}