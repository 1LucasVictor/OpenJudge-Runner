#include <stdio.h>

int main(void)
{
	int n,i,a,b,c;
	
	scanf("%d", &n);
	for ( i = 0; i < n; i++){
		scanf("%d %d %d", &a, &b, &c);
	
	if (a*a + b*b == c*c){
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	}
	
	return (0);
}