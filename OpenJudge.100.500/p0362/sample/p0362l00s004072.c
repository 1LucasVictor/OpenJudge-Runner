#include<stdio.h>

int compare(int x[3],int n){
	int i = 0,c=0;
	for (; i < n-1; i++){
		if (x[i]<x[i + 1])
			c++;
	}
	if (c == n - 1)
		return 1;
	else
		return 0;
}

int main(void){
	int x[3] = { 0 };
	int n = sizeof(x) / sizeof(x[0]);

	int i = 0;
	for (; i < n; i++){
		scanf("%d", &x[i]);
	}
	
	if (compare(x, n) == 1)
		printf("Yes\n");
	else
		printf("No\n");


	return 0;
}
