#include <stdio.h>

int main(void)
{
	int d[11],out[11];
	int n,i=0,i_o=0;
	
	do{
		scanf("%d", &n);
		if(n == 0){
			printf("%d\n", d[i-1]);
			d[i] = EOF;
			i--;
		}
		else {
			d[i] = n;
			i++;
		}
	}while(i != 0);
	
	return (0);
	
}