#include <stdio.h>
#include<string.h>

int main() {
    int a,b;
	scanf("%d %d", &a, &b);
	int l=a+b;
	int m=a-b;
	int n=a*b;
	if(l>=m) {
		if (l>=n) printf("%d", l);
		else printf("%d", n);	
	}
	else printf("%d", m);
	
	return(0);
	
}