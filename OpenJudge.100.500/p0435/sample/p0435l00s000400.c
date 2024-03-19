#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.141592653589793
#define MOD 1000000007
//#define DEBUG

//qsort用、昇順
int compare_int(const void *a, const void *b)
{
	return *(int*)a-*(int*)b;
}
//qsort(array, 10, sizeof(int), compare_int)

int x[200100], y[200100];

int main(){
	int n, d, count = 0;
	long int tmp, dd;
	scanf("%d%d", &n, &d);
	dd = d*d;
	for(int i=0; i<n; i++){
		scanf("%d%d", &x[i], &y[i]);
	}

	for(int i=0; i<n; i++){
		tmp = x[i]*x[i] + y[i]*y[i];
		if(tmp<=dd) count++;
	}
	
	printf("%d\n", count);

	
	return 0;
}

