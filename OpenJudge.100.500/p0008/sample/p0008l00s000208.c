#include<stdio.h>

int search_prime(int k){ /*kの素数判定*/
	int n=2;
	do{
	if(k%n==0) return (0);
	}while(n++<k-1);

	return (1);
}

int count_prime(int n){
	int i;
	int count=0;

	if(n>=2) count++ ;

	for( i=3; i<=n ; i+=2){
		if(search_prime(i)) count++ ;
	}
	return (count);
}

int main(void){

	int n;

	while(scanf("%d", &n) != EOF){

	printf("%d\n", count_prime(n));
	}

return (0);
}	