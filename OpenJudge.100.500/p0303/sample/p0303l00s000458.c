#include<stdio.h>
#define MAX 100000
typedef long long llong;

int n, k;

//最大積載量Pのk台のトラックで何個の荷物を積めるか
int check(int w[], llong P)
{
	int i=0;
	for(int j=0; j<k; j++){
		llong s = 0;
		while( s + w[i] <= P ){
			s = s + w[i];
			i++;
			if(i==n) return n;
		}
	}
	
	return i;
}

int solve(int w[], int n)
{
	llong left = 0;
	llong right = 100000*10000; //荷物の個数×一個あたりの最大重量
	llong mid;
	while( right-left>1 ){
		mid = (left+right) / 2;
		int v = check(w, mid);	//mid==Pｗｐ決めて何個積めるかチェック
		if( v>=n ) right = mid;
		else left =  mid;
	}
	return right;
}

int main(void)
{
	int i;
	scanf("%d %d",&n, &k);
	int w[n];
	for(i=0; i<n; i++){
		scanf("%d", &w[i]);
	}
	llong ans = solve(w, n);
	printf("%ld\n", ans);
}
