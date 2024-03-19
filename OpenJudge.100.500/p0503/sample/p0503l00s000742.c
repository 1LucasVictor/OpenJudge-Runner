#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
{
 	return *(long long int*)a - *(long long int*)b;
 }
int main()
{
	int n;
	scanf("%d",&n);
	long long int a[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	qsort(a,n,sizeof(a[0]),cmp);
	int flag=0;
	if(n/2!=0){
		for(i=0;i<n/2;i++){
			if(a[i]+a[n-i-2]!=a[n-1]){
				flag=1;
				break;
			}
		}
		if(flag) printf("NO");
		else printf("YES");
	}
	else{
		for(i=1;i<n/2;i++){
			if(a[i]+a[n-i-1]!=a[0]+a[n-1]){
				flag=1;
				break;
			}
		if(flag) printf("NO");
		else printf("YES");
		}
	}
	return 0;
}