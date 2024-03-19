#include <stdio.h>

main() {
	int a,b,n;
	while(scanf("%d",&a)!=EOF){
	 	scanf("%d",&b);
	 	for(n=1;(a+b)/(pow(10,n))>=1;){
	 		n++;
	 	}
	 	printf("%d\n",n);
	 }
	return 0;
}

