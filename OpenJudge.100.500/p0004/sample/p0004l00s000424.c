#include<stdio.h>

int main(void){
	long a,b,a1,a2,i,t;
	
	while(scanf("%ld %ld",&a,&b)!=EOF){
		if(a>b){
			t=a;
			a=b;
			b=t;
		}
		for(i=a;i>0;i--){
			if(a%i==0 && b%i==0){
				a1=i;
				break;
			}
		}
		
		
		
		a2=a/a1*b;
		
		printf("%ld %ld\n",a1,a2);
		
		
		
	}
	
	
	
	return 0;
}