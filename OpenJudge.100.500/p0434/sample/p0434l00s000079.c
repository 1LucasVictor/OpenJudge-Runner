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

int main(){
	int n;
	scanf("%d", &n);
	
	if(n>29) printf("Yes\n");
	else printf("No\n");

	//printf("%d\n", okane);

	
	return 0;
}

