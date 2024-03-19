#include<stdio.h>

int main(){

	int a[110];
	int n = 0;
	int i = 0,j = 0;
	int k = 0;

	scanf("%d",&n);
	
	for(i = 0; i < n; i++){
		scanf("%d",&a[i]);
	
	}
	
	for(i = n-1; i >= 0; i--){
	printf("%d",a[i]);
		
		if(i!=0)printf(" ");
	}
	
	printf("\n");
	
	
	
	
	
return 0 ;

}