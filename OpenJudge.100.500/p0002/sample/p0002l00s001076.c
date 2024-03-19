#include<stdio.h>

int main(){
	unsigned long int a,b,c;
	int n;
	int i;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%ld%ld%ld",&a,&b,&c);
		if((a*a+b*b == c*c))printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}