#include<stdio.h>

#define NMAX 100000

long long int W[NMAX];
int n,k;

int check(long long int mid){
	int i = 0;
	for(int j = 0; j < k; j++){
		long long int s = 0;
		while(s + W[i] <= mid){
			s += W[i];
			i++;
			if(i == n){
				return n;
			}
		}
	}
	return i;
}
int solve(){
	long long int left = 0;
	long long int right = 100000 * 10000;
	long long int mid;
	while((right - left) > 1){
		mid = (left + right) / 2;
		int v = check(mid);
		if(v >= n){
			right = mid;
		}
		else{
			left = mid;
		}
	}
	return right;
}

int main(void){
	int i;
	long long int c = 0;
	scanf("%d%d" ,&n,&k);
	for(i = 0; i < n; i++){
		scanf("%d",&W[i]);
	}
	c = solve();
	printf("%d\n" ,c);
	return 0;
}
