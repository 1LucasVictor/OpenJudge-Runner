#include <stdio.h>

int main(void) {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	if(A+B+C==17){
		if(A==5){
			if(B==5){
				printf("YES");
			}else{
				if(B==7){
					printf("YES");
				}else{
					printf("NO");
				}
			}
		}else{
			if(A==7){
				if(B==5){
					printf("YES");
				}else{
					printf("NO");
				}
			}
			
		}
	}else{
		printf("NO");
	}
	return 0;
}
