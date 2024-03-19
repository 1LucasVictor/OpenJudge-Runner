#include <stdio.h>

int tt(int,int,int);
int main(void)
{
	int i,n,a[1000],b[1000],c[1000],kai[1000];
	
	scanf("%d", &n);
	for (i=0;i<n;i++){
		scanf("%d%d%d", &a[i], &b[i], &c[i]);
		kai[i] = tt(a[i], b[i], c[i]);
	}
	
	for (i=0;i<n;i++){
		if (kai[i] == 1){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	
	return 0;
}

int tt(int A, int B, int C)
{
	int or=0;
	if (A*A == B*B + C*C){
		or = 1;
	}
	if (B*B == A*A + C*C){
		or = 1;
	}
	if (C*C == A*A + B*B){
		or = 1;
	}
	else {
		or = 0;
	}
	
	return or;
}