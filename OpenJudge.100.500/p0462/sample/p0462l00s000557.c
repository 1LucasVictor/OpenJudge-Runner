#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.141592653589793
#define MOD 1000000007

//qsort用、昇順
int compare_int(const void *a, const void *b)
{
	return *(int*)a-*(int*)b;
}
//qsort(data, 10, sizeof(int), compare_int)

//long long int a[100100];

int main(){
	double a, b;
	scanf("%lf%lf", &a, &b);
	int ans = a*b;

	printf("%d\n", ans);
	
	return 0;
}