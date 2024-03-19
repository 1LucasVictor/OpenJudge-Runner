#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
void freelist(int* list) {
	free(list);
	list = NULL;
}
int main(void) {
	int* list;
	int input[2];
	int n, m;
	scanf("%d%d", &n, &m);
	list = (int*)malloc(sizeof(int) * n);
	/*初期化*/
	for (int i = 0;i < n;i++) {
		list[i] = 0;
	}
	/*1回目だけ先に入力しておく。*/
	scanf("%d%d", &input[0], &input[1]);
	if (input[0] == 1 && input[1] == 0) {
		printf("%d", -1);
		freelist(list);
		return 0;
	}
	list[input[0] - 1] = input[1];
	for (int i = 1;i < n;i++) {
		scanf("%d%d", &input[0], &input[1]);
		//未入力ではない かつ　既に値が入力されている場合
		if (list[input[0]-1] != 0 && list[input[0]-1] != input[1]) {
			printf("%d", -1);
			freelist(list);
			return 0;
		}
		list[input[0] - 1] = input[1];
	}
	/*先頭が0のままの場合*/
	if (list[0] == 0) {
		printf("%d", -1);
		freelist(list);
		return 0;
	}
	/*どれにも当てはまらない場合*/
	for (int i = 0;i < n;i++) {
		printf("%d", list[i]);
	}
	freelist(list);
	return 0;
}