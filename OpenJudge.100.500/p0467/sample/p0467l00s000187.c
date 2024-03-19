#include<stdio.h>

int main(){
	int a,b,c,k;
	
	scanf("%d %d %d %d",&a,&b,&c,&k);
	int left = k;
	int sum = 0;
	if(a >= k){
		sum = k;
	}else{
		left -= a;
		sum += a;
		if(b >= left){
			sum += 0;
		}else{ 
			left -= b;
			
			sum = sum - left; 
		}
	}
	
	printf("%d",sum);
	
	return 0;
}