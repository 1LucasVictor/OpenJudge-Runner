#include <stdio.h> 
int main() 
{ 
	int k, a, b, i;	
	scanf("%d %d %d", &k, &a, &b);	
	for(i = 0; ; i++){
		if(k * i >= a && k * i <= b){
			printf("OK");break;
		}
		else if(k * i > b){
			printf("NG");break;
		}
	}	
	return 0;
}