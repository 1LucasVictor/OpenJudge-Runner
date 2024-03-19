#include <stdio.h>

int main(void){
	int a,b,c,t,n;
	
	scanf("%d",&n);
	
	for(;n--;){
		scanf("%d %d %d",&a,&b,&c);
	
		if(a>b) t=a, a=b, b=t;
		if(b>c) t=c, c=b, b=t;
	
		if(c*c!=b*b+a*a) printf("NO\n");
		else printf("YES\n");
	}
	
	return 0;
}