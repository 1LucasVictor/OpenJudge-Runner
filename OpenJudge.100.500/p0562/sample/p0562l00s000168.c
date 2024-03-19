#include<stdio.h>

int main(){
	
	int A, B;
	
	scanf("%d %d", &A, &B);
	
	
	int sum = 0;
	int count = 0;
	
	for(int i = 1; i<=B; i++){
//		count++;
		int temp = sum + A;
		if(temp >= B){
			count = i;
			break;
		}
		else{
			sum += A-1;
//			printf("Step %d : %d\n", i, sum);
		}
	}
	
	printf("%d\n", count);
	
//	int sum = 0;
//	int count = 1;

//	while(count < B){
//		count--;
//		count += A;
//		sum++;
//	}
	
//	printf("%d\n", sum);
	
	return 0;
}