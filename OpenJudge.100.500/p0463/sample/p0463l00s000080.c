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


int main(){
	int n;
	scanf("%d", &n);
	n = n%10;
	if(n==3) printf("bon\n");
	else if((n==0) || (n==1) || (n==6) || (n==8)) printf("pon\n");
	else printf("hon\n");

	//printf("%d\n", nowtown);
	
	return 0;
}