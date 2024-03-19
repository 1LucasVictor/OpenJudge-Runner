#include <stdio.h>
#include <stdlib.h>

/* prototype declaration */
int init();
long findMax();

int n;
int *a;

int main(int argc, const char *argv[])
{
	while(init())
		printf("%ld\n", findMax());

	return 0;
}

int init()
{
	int i;
	scanf("%d", &n);
	
	if(n){
		a = malloc(sizeof(int)*n);
		for(i=0; i<n; i++)
			scanf("%d", &a[i]);
		return 1;
	}else{
		free(a);
		return 0;
	}
}

long findMax()
{
	int i, j;
	long max = 0, sum = 0;
	
	for(i=0; i<n; i++){
		for(j=i; j<n; j++){
			sum += a[j];
			if(max<sum) max = sum;
		}
		sum = 0;
	}
	return max;	
}