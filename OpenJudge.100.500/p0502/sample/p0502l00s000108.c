#include <stdio.h>
int main()
{
	int	N;	/* 書類に書かれた整数の個数	*/
	int	A[100];	/* 書類に書かれた整数		*/
	int	index;	/* 配列のインデックス		*/
	int	judge;	/* 入国可能か否か		*/

	scanf("%d", &N);
	for(index = 0; index < N; ++index){
		scanf("%d", &A[index]);
	}
	judge = 1;

	for(index = 0; index < N; ++index){
		if(A[index] % 2 == 0){

			if((A[index] % 3 != 0) && (A[index] % 5 != 0)){
				judge = 0;
			}
		}
	}
	if(judge == 1)
		printf("APPROVED\n");
	else
		printf("DENIED\n");

	return 0;
}