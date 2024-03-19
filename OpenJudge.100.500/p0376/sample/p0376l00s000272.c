#include <stdio.h>

int main(){
	int i;
	int a[100];
	int n;
	scanf("%d",&n);
	for(i = 0;i < n;i++)
		scanf("%ld", &a[i]);
	for(i = n-1;i>=0;i--)
		if(i==0)
			printf("%d\n", a[i]);
		else
			printf("%d ", a[i]);
	return 0;
}