#include<stdio.h>

int main(void){
	long long int a,b;
	long long int data;
	long long int max,min,high,low;	//max=Ååöñ,min=Å¬ö{
	
	while(scanf("%lld %lld",&a,&b)==2){
		if(a<b){
			data=a;
			a=b;
			b=data;
		}
		if(b==0) max=a;
		else{
			data=a%b;
			low=b;
			while(data!=0){
				high=low;
				low=data;
				data=high%low;
			}
			max=low;
		}
		min=a*b/max;
		
		printf("%lld %lld\n",max,min);
	}
	
	return 0;
}