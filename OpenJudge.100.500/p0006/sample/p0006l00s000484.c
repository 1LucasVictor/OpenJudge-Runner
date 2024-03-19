#include<stdio.h>

int kiriage( double x )
{
    return (int)( x < 0.0 ? x : x+0.9 );
}

int main(){

	int i,n;
	double sum=100;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		sum=kiriage(sum*1.05);
	}
	printf("%d\n",((int)sum)*1000);

	return 0;
}