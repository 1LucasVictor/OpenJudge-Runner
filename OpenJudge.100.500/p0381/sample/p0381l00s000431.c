#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {



	int n[100] = { 0 };
	int x[100] = { 0 };

	int answer[100] = { 0 };

	int temp_n, temp_x;

	int i = 0;
	for (; i < 100; i++) {
		scanf("%d %d", &temp_n, &temp_x);
		if (temp_n == 0 && temp_x == 0) {
			break;
		}
		n[i] = temp_n;
		x[i] = temp_x;
	}


	int dataset = 0;
	int start_ans1 = 1;
	int start_ans2 = 2;
	int start_ans3 = 3;

	for (dataset = 0; dataset < i; dataset++) { // データセット
		for (start_ans1 = 1; start_ans1 <= n[dataset] - 2; start_ans1++) {
			for (start_ans2 = start_ans1 +1; start_ans2 <= n[dataset] - 1; start_ans2++) {
				for (start_ans3 = start_ans2+1; start_ans3 <= n[dataset]; start_ans3++) {
					if (start_ans1 != start_ans2 && start_ans1 != start_ans3 && start_ans2 != start_ans3) {
						
						if (start_ans1 + start_ans2 + start_ans3 == x[dataset]) {
							answer[dataset]++;
						}
					}
					
				}
			}
		}

	}
	for (dataset = 0; dataset < i; dataset++) {
		printf("%d\n", answer[dataset]);
	}
	

	return 0;
}
