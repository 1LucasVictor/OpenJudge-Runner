#include<stdio.h>
int main(){
	double num;
	unsigned short ans = 0;
	
	while(1){
		scanf("%lf", &num);
		
		if(num == 0){
			break;
		}
		
		do{
			ans += (long)num % 10;
			num /= 10;
		}while(num > 0);
		
		printf("%d\n", ans);
		
		ans = 0;
	}
	return 0;
}
