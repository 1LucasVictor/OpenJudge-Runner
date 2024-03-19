#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define rep(i,l,n) for(int (i)=(l);(i)<(n);(i)++)
#define min(a,b) (a)<(b)?(a):(b)
#define max(a,b) (a)>(b)?(a):(b)
#define abs(a) (a)>0?(a):-(a)
#define llong long long

int main(){
	int N; scanf("%d",&N);
	int a[N];
	rep(i,0,N) a[i]=0;
	rep(i,1,N){
		int j; scanf("%d",&j);
		j--;
		a[j]++;
	}
	rep(i,0,N) printf("%d\n",a[i]);
	return 0;
}
