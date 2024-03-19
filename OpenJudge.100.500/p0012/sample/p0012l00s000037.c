#include <stdio.h>

int main(void)
{
	int train[100];
	int n;
	int data_no = 0;
	
	while (scanf("%d", &n) != EOF){
		if (!n){
			printf("%d\n", train[data_no]);
			train[data_no--] = 0;
		}
		else {
			train[++data_no] = n;
		}
	}
	
	return (0);
}