#include <stdio.h>

int main(void)
{
	int max, wk;
	int a[200000];
	int *pi, *pj, *pe;
	
	scanf("%d", &max);
	for(pi = a, pe = pi + max; pi < pe; pi++){
		scanf("%d", pi);
	}
	
	max = a[1] - a[0];
	for(pj = &a[2]; pj < pe; pj++){
		for(pi = a; pi < pj; pi++){
			wk = *pj - *pi;
			if(max < wk){
				max = wk;
			}
		}
	}
	printf("%d\n", max);
	
	return(0);
}

