#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
#define inout freopen("in.txt","r",stdin);freopen("out.txt","w",stdout)
#define swap(a,b) (a)+=(b);(b)=(a)-(b);(a)-=(b)
#define quicksort(a,n) qsort(a,n,sizeof(a[0]),cmp)
#define inputarr(a,n) for(int i=0;i<n;i++){scanf("%d",&a[i]);}
#define printarr(a,n) for(int i=0;i<n;i++){printf("%d ",a[i]);}puts("");
int cmp(const void *a,const void *b){return *(int *)a - *(int *)b;}

int n, m, k, ans = -1, a[200001], b[200001];

int main() {

	//inout;

	scanf("%d%d%d", &n, &m, &k);

	for(int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		a[i] += a[i - 1];
	}

	for(int i = 1; i <= m; i++){
		scanf("%d", &b[i]);
		b[i] += b[i - 1];
	}

	for(int i = 0; i < n + 1; i++){

		if(a[i] > k){break;}

		int j = m;

		while(b[j] > k - a[i] && j >= 0){
			j--;
		}

		if(j + i > ans){
			ans = j + i;
		}
	}

	printf("%d", ans);

}