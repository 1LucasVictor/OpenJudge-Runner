#include <stdio.h>

int main(void)
{
	int d[100];
	int n,i=0;
	
	while(scanf("%d", &n) != EOF){
		if(n == 0){
			i--;
			printf("%d\n", d[i]);
		}
		else {
			d[i] = n;
			i++;
		}
	}
	
	return (0);
	
}