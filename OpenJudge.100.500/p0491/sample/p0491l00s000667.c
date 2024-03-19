#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	
	int a = n/k;
	n = fabs(n - a*k);
	int m;
	m = fabs(n - k);
	if(n>m){
		printf("%d",m);
	}else{
		printf("%d",n);
	}	
	
	return 0;
}