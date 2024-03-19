#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.141592653589793
#define MOD 1000000007

int compare_int(const void *a, const void *b)
{
	return *(int*)a-*(int*)b;
}

int main(){
	int n;
	scanf("%d", &n);
	int array[n];
	for(int i=0; i<n; i++){
		scanf("%d", &array[i]);
	}
	qsort(array, n, sizeof(int), compare_int);
	int ok = 0;
	for(int i=0; i<n-1; i++){
		if(array[i+1]==array[i]){
			ok = -1;
			break;
		}
	}
	if(ok == 0) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}