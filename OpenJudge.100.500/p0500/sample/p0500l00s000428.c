#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

int main(void) {
	int* list;
	int input[2];
	int n, m, res = 1;
	scanf("%d%d", &n, &m);
	list = (int*)malloc(sizeof(int) * n);
	/*初期化*/
	for (int i = 0;i < n;i++) {
		list[i] = 0;
	}
	for (int i = 0;i < m;i++) {
		scanf("%d%d", &input[0], &input[1]);
		//未入力ではない かつ　既に値が入力されている場合
		if (list[input[0] - 1] != 0 && list[input[0] - 1] != input[1]) {
			res = 0;
		}
		list[input[0] - 1] = input[1];
	}
	/*先頭が0のままの場合*/
	if (list[0] == 0) {
		res = 0;
	}
	/*どれにも当てはまらない場合*/
	if (res != 0) {
		for (int i = 0;i < n;i++) {
			printf("%d", list[i]);
		}
	}
	else {
		printf("%d", -1);
	}
	free(list);
	list = NULL;
	return 0;
}