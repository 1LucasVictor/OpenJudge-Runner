#include<stdio.h>

int main(void)
{
	int e[1000];
	int n = 0;
	int q;
	int r[1000];
	int i = 0;
	int j;
	
	while (1) {
		scanf("%d", &q);
		
		if (q != 0) {
			e[n] = q;
			n++;
		}
		
		else {
			n--;
			r[i] = e[n];
			i++;
			
			if (n == 0) {
				e[0] = 0;
			}
		}
		
		if (e[0] == 0) {
			break;
		}
	}
	
	for (j = 0; j < i; j++) {
		printf("%d\n", r[j]);
	}
	
	return (0);
}