#include<stdio.h>
#define P(type,x) fprintf(stdout,"%"#type"\n",x)
#define S(type,x) fscanf(stdin,"%"#type,&x)
long long n, k,s=0,
		w[100000];
long long f(long long a);
int main() {	
	S(lld, n), S(lld, k);
	int i;
	for (i = 0; i < n; i++) scanf("%lld", w + i), s += w[i];
	long long a = s / k;
	while (f(a) != n)a++;
	P(lld, a);
	return 0;
}

long long f(long long a){
	int x = 0;
	int i;
	for (i = 0; i < k; i++) {
		long long s = 0;
		while (s + w[x] <= a) {
			s += w[x++];
			if (x >= n)return n;
		}
	}
	return x;
}