#include <stdio.h>

int main(void)
{
	int d[11],out[11];
	int n,i=0,i_o=0;
	
	do{
		scanf("%d", &n);
		if(n == 0){
			out[i_o] = d[i-1];
			d[i] = EOF;
			i--;
			i_o++;
		}
		else {
			d[i] = n;
			i++;
		}
	}while(i != 0);
	
	for (i = 0; i < i_o; i++){
		printf("%d\n", out[i]);
	}
	return (0);
	
}