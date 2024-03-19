#include <stdio.h>
#include <stdlib.h>
#define ll long long
int upll(const void*a, const void*b){return*(ll*)a<*(ll*)b?-1:*(ll*)a>*(ll*)b?1:0;}
void sortup(ll*a,int n){qsort(a,n,sizeof(ll),upll);}

ll a[200010];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%lld",a+i);
	sortup(a,n);
	for(int i=1;i<n;i++)if(a[i-1]==a[i]){
		puts("NO");
		return 0;
	}
	puts("YES");
}