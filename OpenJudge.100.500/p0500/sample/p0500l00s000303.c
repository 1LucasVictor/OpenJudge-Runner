/*
	submission # - User: herp_sy
	https://atcoder.jp/contests/

	coding: utf-8
	lang: C (GCC 5.4.1)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long
#define TBMod 1000000007

// fact(n)
int fact(int n){
	if(n == 1)	return 1;
	else return (n * fact(n - 1));
}

// gcd(a,b)
int gcd(int a,int b){
	if(a == 0) return b;
	else if(b == 0) return a;
	else return gcd(b,a % b);
}

// lcm(a,b)
int lcm(int a,int b){
	return (a * b) / gcd(a,b);
}

// nCr(n,r) & utility
int nCrVal[5003][5003];
int nCrSetUp(int n){
	for(int i = 0; i <= n; ++i){
		for(int j = 0; j <= i / 2 + 1; ++j){
			if(j == 0)  nCrVal[i][j] = 1;
			else  nCrVal[i][j] = nCrVal[i - 1][j - 1] + nCrVal[i - 1][j];
			nCrVal[i][i - j] = nCrVal[i][j];
 		}
	}
}

int nCr(int n, int r){
	if(nCrVal[n][r] == 0)	nCrSetUp(n + 1);
	return nCrVal[n][r];
}

// swap(&a, &b);
void swap(int *a,int *b){
	int tmp;
	tmp = *a;	*a = *b;	*b = tmp;
	return;
}

// qsort(array, size, sizeof(int),comp);
int ASC(const int *a,const int *b){
	return (*a - *b);
}

int DESC(const int *a,const int *b){
	return (*b - *a);
}

int main(int argc, char const *argv[])
{
	int n, m;
	int s[7], c[7];
	int beg = 1, keta = 1, ans = 0;
	int temp;

	scanf("%d%d", &n,&m);
	for(int i = 0; i < n - 1; ++i)	beg *= 10;

	for (int i = 0; i < m; ++i){
		scanf("%d%d", &s[i], &c[i]);
		keta = 1;
		temp = ans;
		
		for (int j = 0; j < n - s[i]; ++j)	keta *= 10;
		for (int k = 0; k < n - s[i]; ++k)  temp /= 10;
		
		if(temp % 10 == c[i]) continue; 
		else ans += (keta * c[i]);
	}
	if(beg <= ans && ans < beg * 10)	printf("%d\n", ans);
	else puts("-1");

	return 0;
}
