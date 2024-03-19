#include <stdio.h>
#include <math.h>

int main(){
	int a[100000] = {0}, i, sum=0;
	double h, n;
	
	scanf("%lf %lf", &h, &n);
	for(i = 0; i < n; i++){
		scanf("%d ", &a[i]);
		sum+=a[i];
	}
	if(sum >= h){
		printf("Yes");
	}else{
		printf("No");
	}
	
	return 0;
}