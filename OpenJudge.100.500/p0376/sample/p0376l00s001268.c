#include <stdio.h>

int main(void)
{
	unsigned short int i;
	int n, buf[100]={0};

	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &buf[i]);
	}

	for(i=n-1; i>0; i--){
		printf("%d ", buf[i]);
	}
	printf("%d\n", buf[0]);

	return 0;
}