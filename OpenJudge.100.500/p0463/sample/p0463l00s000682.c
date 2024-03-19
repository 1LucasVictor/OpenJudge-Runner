#include <stdio.h>

int main(){
	int n,x1;
	
	scanf("%d",&n);
	
	//10で割った余りがx桁目
	x1 = n % 10;
	if(x1 == 2 || x1 == 4 || x1 == 5 || x1 == 9){
		printf("hon");
	}
	else if(x1 == 0|| x1 == 1 || x1 == 6|| x1 == 8){
		printf("pon");
	}
	else printf("bon");

	return 0;
}
