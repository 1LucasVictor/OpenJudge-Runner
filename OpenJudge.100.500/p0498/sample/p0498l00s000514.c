#include <stdio.h>

int main(){
	int n;
	if(scanf("%d", &n)==EOF){return 1;}
	printf("%d\n",(n+1)/2);
	return 0;

}