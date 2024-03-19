#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define findmax(a,b) (a)>(b)?(a):(b)
#define findmin(a,b) (a)<(b)?(a):(b)
#define inout freopen("in.txt","r",stdin);freopen("out.txt","w",stdout)
#define swap(a,b) (a)+=(b);(b)=(a)-(b);(a)-=(b)
#define quicksort(a,n) qsort(a,n,sizeof(a[0]),cmp)
#define inputarr(a,n) for(int i=0;i<n;i++){scanf("%d",&a[i]);}
#define printarr(a,n) for(int i=0;i<n;i++){printf("%d ",a[i]);}puts("");
int cmp(const void *a,const void *b){return *(int *)a - *(int *)b;}


int main() {
    
	//inout;

	int x, y, res;

	scanf("%d%d", &x, &y);

	for(int i = 0; i <= x; i++){
		res = i * 2 + ((x - i) * 4);
		if(res == y){
			puts("Yes");
			return 0;
		}
	}
	puts("No");

}