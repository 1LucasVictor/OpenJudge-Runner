#include<stdio.h>

int main(){
	
	int A, B;
	
	scanf("%d %d", &A, &B);
	
	int sum = 0;
	int count = 1;
	
//	for(int i = 1; i<=B; i++){
//		int temp = sum + A;
//		if(temp >= B){
//			break;
//		}
//		else{
//			count++;
//			sum += A-1;
////			printf("Step %d : %d\n", i, sum);
//		}
//	}

	while(count < B){
		count--;
		count += A;
		sum++;
	}
	
	printf("%d\n", sum);
	
	return 0;
}