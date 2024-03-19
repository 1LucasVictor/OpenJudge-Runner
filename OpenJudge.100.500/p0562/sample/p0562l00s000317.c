#include<stdio.h>

int main(){
	
	int A, B;
	
	scanf("%d %d", &A, &B);
	
	int sum = 0;
	int count = 0;
	
	for(int i = 0; i<B; i++){
		count++;
		int temp = sum + A;
		if(temp >= B){
			break;
		}
		else{
			sum+= A-1;
		}
	}
	
	printf("%d\n", count);
	
	return 0;
}