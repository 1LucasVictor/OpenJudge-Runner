#include<stdio.h>

int kiriage( int x )
{   
    return x%1000==0 ? x : x+1000-(x%1000);
}

int main(){

	int i,n;
	int sum=100000;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		sum=kiriage(sum*1.05);
	}
	printf("%d\n",sum);

	return 0;
}