#define _CRT_SECURE_NO_WARNINGS
#define MAX 100000;	//マクロは条件式内では使えない？
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int max = MAX 	
int Q[100000], head, tail;

void initialize() {
	head = tail = 0;
}

int isEmpty() {
	return head == tail;
}
int isFull() {
	return head == (tail + 1) % MAX;	//MAX = 7のときhead =4、tail=3となる。head = tailではないのは、配列の要素を全て使うわけではないことが原因。
}										//（入る容量は要素-1。つまりMAX）

void enqueue(int x) {
	if (isFull()) {
		printf("これ以上入りません\n");
		return;
	}
	
	Q[tail] = x;
	if (tail + 1 == max) {
		tail = 0;
	}
	else {
		tail++;
	}
}

int dequeue() {
	int x;
	if (isEmpty()) {
		printf("これ以上取り除けません\n");
		return 0;
	}
	x = Q[head];
	if (head + 1 == max) {
		head = 0;
	}
	else {
		head++;
	}
	return x;
}

struct process {
	char name[10];
	int time,timeFin;
};

int main() {
	int i, n, q, total = 0;
	char nameAndTime[20], nq[15], *cn;
	struct process p[10000];

	initialize();

	fgets(nq, sizeof(nq), stdin);
	cn = strtok(nq, " ");
	n = atoi(cn);
	cn = strtok(NULL, " ");
	q = atoi(cn);

	for (i = 0; i < n; i++) {
		fgets(nameAndTime, sizeof(nameAndTime), stdin);
		cn = strtok(nameAndTime, " ");
		strcpy(p[i].name, cn);
		cn = strtok(NULL, " ");
		p[i].time = atoi(cn);
		total += p[i].time;
		if (total > 1000000) {
			return 0;
		}
		enqueue(p[i].time);
	}

	int x;
	int	cnt = 0, k = 0, sec = 0;

	while (cnt < n) {
		x = dequeue();
		if (x <= 0) {
			enqueue(x);
		}
		else {
			if (x - q <= 0) {
				sec += x;
				p[k].timeFin = sec;
				printf("%s %d\n", p[k].name, sec);
				x -= q;
				cnt++;
				
			}
			else {
				x -= q;
				sec += q;
			}
			enqueue(x);
		}
		k = (k+1) % n;
	}
}

