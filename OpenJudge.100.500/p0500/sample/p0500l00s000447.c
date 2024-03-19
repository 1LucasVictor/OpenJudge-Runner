#include <stdio.h>

#define MAX 3

void set(int*);
void change(int*);

int main()
{
	int data[MAX];
	int n, m;
	int s, c;
	int flag = 0;

	scanf("%d %d", &n, &m);
	set(data);

	for (int i = 0; i < m; i++) {
		scanf("%d %d", &s, &c);

		if (data[s - 1] == -1)
			data[s - 1] = c;
		else if (data[s - 1] != c) {
			flag = -1;
			break;
		}
	}

	if (data[0] == 0)
		flag = -1;

	if (data[0] == -1 && n!=1)
		data[0] = 1;

	change(data);


	if (flag == -1)
		printf("%d\n", flag);
	else {
		for (int i = 0; i < n; i++)
			printf("%d", data[i]);
		printf("\n");
	}

	return 0;
}
void set(int* data)
{
	for (int i = 0; i < MAX; i++)
		data[i] = -1;
}

void change(int* data)
{
	for (int i = 0; i < MAX; i++)
		if (data[i] == -1)
			data[i] = 0;
}