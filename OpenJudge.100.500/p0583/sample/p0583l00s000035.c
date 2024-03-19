#include<stdio.h>
#include <stdlib.h>



int main(){

	int i, j, A, B, C, D, N, B_kari = -10, flag;
	char *S;




	scanf("%d %d %d %d %d", &N, &A, &B, &C, &D);

	S = (char *)malloc(N * sizeof(char));

	scanf("%s", S);


	if (C < D){
		while (1){
			if (B + 1 < N && S[B + 1] == '.' && B + 1 < D){
				B += 2;
			}
			else if (B < N && S[B] == '.'){
				B++;
			}
			else{
				printf("No\n");
				return 0;
			}
			if (B == D)
				break;
		}

		while (1){
			if (A + 1 < N && S[A + 1] == '.' && A + 1 < D){
				A += 2;
			}
			else if (A < N && S[A] == '.'){
				A++;
			}
			else{
				printf("No\n");
				return 0;
			}
			if (A == C)
				break;
		}

		printf("Yes\n");
		return 0;

	}
	else{
		flag = 0;
		for (i = B - 2; i < D + 1; i++){
			if (S[i] == '.'){
				flag++;
			}
			else{
				flag = 0;
			}
			if (flag == 3){
//				printf("aaaaaaaaaaa %d\n", i);
				B_kari = i;
				break;
			}
		}

		if (B_kari < 0){
			printf("No\n");
			return 0;
		}

		while (1){
			if (B + 1 < N && S[B + 1] == '.' && B + 1 < B_kari){
				B += 2;
			}
			else if (B < N && S[B] == '.' ){
				B++;
			}
			else{
				printf("No\n");
				return 0;
			}
			if (B == B_kari){
				S[B - 1] = '#';
	//			printf("%s %d\n", S, B);
				break;
			}

		}

		while (1){
			if (A + 1 < N && S[A + 1] == '.' && A + 1 < C){
				A += 2;
			}
			else if (A < N && S[A] == '.'){
				A++;
			}
			else{
				printf("No\n");
				return 0;
			}
			if (A == C)
				break;
		}

		if (B == D){
			printf("Yes\n");
			return 0;
		}

		while (1){
			if (B + 1 < N && S[B + 1] == '.' && B + 1 < D){
				B += 2;
			}
			else if (B < N && S[B] == '.'){
				B++;
			}
			else{
				printf("No\n");
				return 0;
			}
			if (B == D)
				break;
		}

	printf("Yes\n");
		return 0;


	}
}
    
