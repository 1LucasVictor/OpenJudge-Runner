#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int s = n % 10;
	if(s ==3){
		printf("bon");
	}
	else if(s == 1 || s == 6 || s ==8 ||s == 0){
		printf("pon");
	}
	else{
		printf("hon");
	}
}