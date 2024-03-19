#include<stdio.h>

int main(void)
{
	int e[1000];
	int r[1000];
	int q;
	int n1 = 0;
	int n2 = 0;
	int j;
	
	do {
		scanf("%d", &q);
		
		if (q > 0 && q <= 10) {
			e[n1] = q;
			n1++;
		}
		
		else if(q == 0) {
			n1--;
			r[n2] = e[n1];
			n2++;
			
			if (n1 == 0) {
				e[0] = 0;
			}
		}
		
	} while (e[0] != 0);
	
	for (j = 0; j < n2; j++) {
		printf("%d\n", r[j]);
	}
	
	return (0);
}