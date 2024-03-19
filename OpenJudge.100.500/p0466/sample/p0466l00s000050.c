#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define Rep(i,a,n)for(int i=(int)(a);i<(int)(n);i++)
#define rep(i,n)Rep(i,0,n)
typedef long long ll;
typedef long double ld;
#define Ma(x,y) ((x)>(y)?(x):(y))
#define mi(x,y) ((x)<(y)?(x):(y))

int main() {
	char s[11],t[11];
	scanf("%s %s", s, t);
	rep(i, strlen(s)) {
		if (s[i] != t[i]) {
			printf("No");
			return 0;
		}
	}
	printf("Yes");
}