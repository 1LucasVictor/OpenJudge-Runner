#include <stdio.h>

int main(void){
	int a,i,n;
	int min = 1000000;
	int max = -1000000;
	long long int sum = 0;
	scanf("%d",&n);
	
	for(i = 0; i < n; i++){
		scanf("%d",&a);
		if(min > a) min = a;  //最小値
		if(max < a) max= a;  //最大値
		sum = sum + a;        //合計値
	}
	printf("%d %d %lld\n",min,max,sum);
	return 0;
}
