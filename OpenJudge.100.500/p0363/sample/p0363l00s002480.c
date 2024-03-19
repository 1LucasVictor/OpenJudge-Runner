#include<stdio.h>

int num[2];

void swap_num(int i, int j) {
	int temp = num[i];
	num[i] = num[j];
	num[j] = temp;
}

void compare_min(){
	if (num[0] > num[1]) swap_num(0, 1);
	if (num[1] > num[2]) swap_num(1, 2);
	if (num[0] > num[1]) swap_num(0, 1);
}

int main() {
	scanf("%d%d%d", &num[0], &num[1], &num[2]);
	compare_min();
	printf("%d %d %d\n", num[0], num[1], num[2]);

	return 0;
}
