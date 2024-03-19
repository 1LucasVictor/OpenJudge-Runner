#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.141592653589793
#define MOD 1000000007

long int combination(long int n, long int r);

//qsort用、昇順
int compare_int(const void *a, const void *b)
{
	return *(int*)a-*(int*)b;
}
//qsort(data, 10, sizeof(int), compare_int)

long int combination(long int n, long int r)
{
	if(r>n-r) r = n-r;
	if(r == 0) return 1;
	else if(r == 1) return n;
	return (combination(n-1, r) + combination(n-1, r-1));
	//大きくなるとき
	/*
	long int tmp1, tmp2, tmp3;
	tmp1 = combination(n-1, r);
	if(tmp1>=MOD) tmp1 = tmp1%MOD;
	tmp2 = combination(n-1, r-1);
	if(tmp2>=MOD) tmp2 = tmp2%MOD;
	tmp3 = tmp1+tmp2;
	if(tmp3>=MOD) tmp3 = tmp3%MOD;
	return (tmp3);
	*/
}


int main(){
	int x;
	scanf("%d", &x);

	int happy=0;
	int tmp= x/500;
	happy += tmp*1000;
	x -= tmp*500;
	happy += (x/5)*5;
	printf("%d\n", happy);
	
	return 0;
}