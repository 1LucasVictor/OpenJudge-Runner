#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	int n ,q;
	char name[1000][11];
	int time[1000];
	char clearname[1000][11];
	int cleartime[1000];
	int endtime = 0;
	int front = 0;
	int rear;
	int i = 0;

	scanf("%d %d", &n, &q);

	for (rear = 0; rear < n; rear++) {
		scanf("%s %d", name[rear], &time[rear]);
	}

	rear++;
	while (1) {
		if (time[front] > 0) {
			if (time[front] > 100) {
				time[front] -= 100;
				endtime += 100;
				strcpy(name[rear], name[front]);
				time[rear] = time[front];
				rear++;
			}
			else {
				endtime += time[front];
				time[front] = endtime;
				strcpy(clearname[i], name[front]);
				cleartime[i] = time[front];
				i++;
			}

			time[front] = 0;
			memset(name[front], 0, 1);
		}

		front++;

		if (rear == front) {
			break;
		}
	}

	for (i = 0; i < n; i++) {
		printf("%s %d\n", clearname[i], cleartime[i]);
	}

	return 0;
}
