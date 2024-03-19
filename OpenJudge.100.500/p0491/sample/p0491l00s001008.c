#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	
	int a = n/k;
	n = n - a*k;
	int m;
	m = -(n - k);
	if(n>m){
		printf("%d",m);
	}else{
		printf("%d",n);
	}	
	
	return 0;
}