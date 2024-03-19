#include<stdio.h>

int main(){
	int n, a, b;
	
	scanf("%d", &n);
	scanf("%d", &a);
	scanf("%d", &b);
	
	int train = n*a;
	int taxi = b;
	
	if(train>taxi){
		printf("%d\n", taxi);
	}
	else{
		printf("%d\n", train);	
	}
	
	
	
	return 0;
}

