#include<stdio.h>

int sosu(int x){
	int i=3;
	
	
	
		if(x==2){
		return 1;
		}
		if(x<2||x%2==0){
		return 0;
		}
	
		while(i*i<=x){
		
		if(x%i==0)
		return 0;
		i=i+2;
		
		}
		
		return 1;
	}

int main(void)
{
	int n,i,x;
	int c=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		if(sosu(x)){
			c=c+1;
		}
	}
		printf("%d\n",c);
		return 0;
}