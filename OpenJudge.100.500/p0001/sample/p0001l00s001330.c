#include<stdio.h>

int main(void){

	int a,b,i,sum;
	
	
	while(scanf("%d %d",&a,&b)!=EOF){
		
	
		sum=a+b;
	
		i=1;
		while(sum>9){
			sum=sum/10;
			i++;
		}

		printf("%d\n",i);
	}
}