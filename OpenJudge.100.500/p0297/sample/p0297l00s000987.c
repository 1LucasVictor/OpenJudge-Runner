#include <stdio.h>
#define NAME_LEN 20
#define MAX 100000

typedef struct {
	char name[NAME_LEN];
	int time;
} Process;

Process a[MAX];
int top;

void push(Process p)
{
	a[++top] = p;
}

Process pop(void)
{
	int i;
	Process tmp = a[0];
	for(i = 0; i < top; i++)
		a[i] = a[i + 1];
	top--;
	return tmp;
}

int main(void)
{
	int n, q, i;
	int timer = 0;
	scanf("%d %d", &n, &q);
	for (i = 0; i < n; i++) {
		scanf("%s %d", a[i].name, &(a[i].time));
	}

	top = n - 1;
	while (top >= 0) {
		Process pro;
		pro = pop();
		if (pro.time <= q) {
			timer += pro.time;
			printf("%s %d\n", pro.name, timer);
		}
		else {
			timer += q;
			pro.time -= q;
			push(pro);
		}
	}

	return 0;
}