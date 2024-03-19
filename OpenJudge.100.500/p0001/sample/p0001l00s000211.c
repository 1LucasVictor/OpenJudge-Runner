#include<stdio.h>
#include<stdlib.h>

main(){
	int a,b,sum,count;
	while(scanf("%d %d", &a, &b)!=EOF){
	sum = a + b;
	count = 0;
	
	while(1){
		sum = sum/10;
		count ++;
		if(sum < 1) break;
	}
	printf("%d", count);
}
	return 0;
} 
