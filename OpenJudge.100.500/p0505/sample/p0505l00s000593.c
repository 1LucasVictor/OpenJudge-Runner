#include <stdio.h>
#include <string.h>
#define MAX 100000
int main() {
	int h,n,i;
	int a;
	int sum;
	sum=0;
	scanf("%d %d",&h, &n);
	for(i=0;i<n;i++){
		scanf("%d ", &a);
		sum+=a;
	}
	if(sum>=h) {
		printf("Yes");
	} else {
		printf("No");
	}
	return 0;
}