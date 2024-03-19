#include<stdio.h>

int main(void){

	int n;
	int digit = 0; 

	scanf("%d", &n);

	int m;

	m = n;

	while(m != 0){
		m = m /  10;
		digit++;
	}
	



	n = n % 10;

	if(n==2||n==4||n==5||n==7||n==9){
		printf("hon");
	}
	

	else if(n==0||n==1||n==6||n==8){
		printf("pon");
	} 
	else if(n==3)
		printf("bon");

	return 0;
}