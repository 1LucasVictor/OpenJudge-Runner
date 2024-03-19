#include <stdio.h>

int main(int argc, char const *argv[])
{
	int array[100], n, i, tmp;
	scanf("%d", &n);

	for(i = 0;i < n; i++){
		scanf("%d", array + i);
	}

	for(i = 0; i < (n / 2); i++){
		tmp = array[i];
		array[i] = array[n - i -1];
		array[n - i - 1] = tmp;
	}

	for(i = 0; i < n; i++){
		printf("%d", array[i]);
		if(i < n - 1) printf(" ");
	}
	printf("\n");
	return 0;
}