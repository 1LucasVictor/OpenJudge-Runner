#include <stdio.h>
#define rep(i, n) for (int i = 0; i < (int) (n); i++)
#define MOD 1000000007
typedef long long ll;
 
#include <stdlib.h>
 
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}
 
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	rep(i, n) scanf("%d", &a[i]);
	qsort(a, n, sizeof(int), compare_int);
    rep(i, n - 1){
    	if(a[i] == a[i + 1]){
    		printf("NO");
    		return 0;
    	}
    }
	printf("YES");
	return 0;
}