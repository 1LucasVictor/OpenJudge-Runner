#define MAX_NUM 128

#include<stdio.h>

int main(void){
	int a[MAX_NUM], cnt = 0, i, j, k;

	for (i = 0; i < MAX_NUM; i++) {
		scanf("%d", &a[i]);
		if (a[0] == 0 || a[i] < 0 || a[i] > 10) {
			printf("Error!\n");
			break;
		} else if (a[i] != 0) {
			cnt++;
		} else {
			cnt--;
		}
		if (cnt == 0) {
			break;
		}
	}
	if (a[0] == 0 || a[i] < 0 || a[i] > 10) {
		return 0;
	}

	for (j = 0; j < i + 1; j++) {
		if (a[j] == 0) {
			k = 1;
			while (1) {
				if (a[j - k] == 0) {
					k++;
				} else {
					break;
				}
			}
			printf("%d\n", a[j - k]);
			a[j - k] = 0;
		} 
	}
	return 0;
}