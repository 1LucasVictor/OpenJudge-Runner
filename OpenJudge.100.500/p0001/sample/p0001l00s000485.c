#include <stdio.h>

int main(void)
{
	int a[200] = {0};
	int b[200] = {0};
	int sum[200] = {0};
	int dn[200] = {0};
	int i = 0;
	int j = 0;
	
    while (scanf("%d %d", &a[i], &b[i]) != EOF){
		sum[i] = a[i] + b[i];
    	i++;
	}
	
	for (j = 0; j < i; j++){
		while (sum[j] != 0){
			sum[j] /= 10;
			dn[j]++;
		}
	}
	
	for (j = 0; j < i; j++){
		printf("%d\n", dn[j]);
	}
    return (0);
}