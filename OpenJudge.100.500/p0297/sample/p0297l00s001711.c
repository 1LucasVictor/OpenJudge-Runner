#include<stdio.h>

typedef struct {
	char name[10];
	int time;
} queue;

int main(){
	int n, q;
	int i, temp;
	int sum = 0;
	int answer = 0;
	int head = 0;
	queue Q[10000];

	scanf("%d%d", &n, &q);
	for (i = 0; i < n; i++) {
		scanf("%s", Q[i].name);
		scanf("%d", &Q[i].time);
		sum += Q[i].time;
	}

	while (sum > 0) {

		temp = q > Q[head].time ? Q[head].time : q;
		if (temp != 0) {
			Q[head].time -= temp;
			answer += temp;
			if (Q[head].time == 0) {
				printf("%s %d\n", Q[head].name, answer);
			}
		}

		head++;
		sum -= temp;
		
		if (head >= n) {
			head = 0;
		}
		
	}

	return 0;
}
