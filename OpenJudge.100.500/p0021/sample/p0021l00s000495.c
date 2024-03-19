#include<stdio.h>
int main(void){
	int number;
	int a[5000] = {0};
	int i,j,k;
	int sum = 0;
	int max = -1000000;
	while(scanf("%d",&number)){
		if(number == 0){
			break;
		}
		for(i = 0;i < number;i++){
			scanf("%d",&a[i]);
		}
		for(i = 0;i < number;i++){
			for(j = i;j < number;j++){
				sum += a[j];
				if(sum > max){
					max = sum;
				}
			}
			sum = 0;
		}
		printf("%d\n",max);
		sum = 0;
		max = -1000000;
	}
	return 0;
}