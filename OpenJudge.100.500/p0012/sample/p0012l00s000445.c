#include <stdio.h>
#define MAX 1024

void push(int a, int arr[]);
int pop (int arr[]);

int main() {
	int num;
	int arr[MAX] = {0};

	while(scanf("%d", &num) != EOF) {
		if(num == 0) {
			printf("%d\n", pop(arr));
		} else {
			push(num, arr);
		}
	}

	return 0;
}

void push(int a, int arr[]) {
	//be careful of the vanish of the last element.
	int i;
	for(i = MAX - 1; i > 0; i--) {
		arr[i] = arr[i-1];
	}
	arr[0] = a;
}

int pop(int arr[]) {
	int r = arr[0];
	int i;
	for(i = 0; i < MAX - 1; i++) {
		arr[i] = arr[i + 1];
	}
	arr[MAX-1] = 0;

	return r;
}