#include <stdio.h>
int main(void){
	int a,b;
	int ans;
	scanf("%d%d",&a,&b);
	ans=a*b;
	if(ans%2==0){
		printf("Even");
	}
	else{
		printf("Odd");
	}


}