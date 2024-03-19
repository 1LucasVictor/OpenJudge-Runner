#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	if (n / 100 == 7){
		puts("Yes");
	}
	
	else if((n % 100) / 10 == 7){
	 	puts("Yes");
	}
	 
	else if(n % 10 == 7){
		puts("Yes");
	} 
	
	else{
		puts("No");
	}
	
	return 0;
}