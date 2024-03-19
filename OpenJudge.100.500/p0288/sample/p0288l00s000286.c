// OnlineJudge.cpp : ????????? ???????????§?????? ??????????????§??????

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void trace(int A[], int N) {
	int i;
	for (i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}

	printf("\n");
}
void insertionSort(int A[], int N) {
	int i, j, tmp;
	for (i = 1; i < N; i++) {
		tmp = A[i];
		j = i - 1;
		while (j >= 0 && A[j] > tmp) {
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = tmp;
		trace(A, N);
	}
}

int main(void)
{
	char str[1000] = {};
	char *s2 = " ";
	char *tok;

	int num = 0;
	int str_cnt = 0;
	int array_i[1000] = {};

	fgets(str, sizeof(str), stdin);
	num = atoi(str);
	if (num < 1 || num > 100)return -1;

	fgets(str, sizeof(str), stdin);
	tok = strtok(str, s2);
	array_i[str_cnt] = atoi(tok);
	if (array_i[str_cnt] < 1 || array_i[str_cnt]  > 1000)return -1;
	str_cnt++;

	while (tok != NULL) {
		tok = strtok(NULL, s2);
		if (tok != NULL) {
			array_i[str_cnt] = atoi(tok);
			if (array_i[str_cnt] < 1 || array_i[str_cnt]  > 1000)return -1;
			str_cnt++;
		}
	}
	
	trace(array_i, num);
	insertionSort(array_i, num);

	//for (int i = 0; i < num; i++) {
	//	printf("%d ", array_i[i]);
	//}

	//printf("\n");

	return 0;

}