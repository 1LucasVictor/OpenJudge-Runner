#include<stdio.h>

int main(void){
	
	int n,m,k;
	int j=100000;

	scanf("%d", &n);

	m=0 ;
	while(m++ < n){
		j*=1.05 , k=j/1000;
		if(j%1000 != 0)
			j=(k+1)*1000; 
	};

	printf("%d\n", j);

	return (0);
}