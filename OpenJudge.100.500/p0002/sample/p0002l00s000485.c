#include<stdio.h>
int main(void)
{
	int i,j,n,a[1000],b[1000],c[1000],C,A,B;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
	}
	for(i=0;i<n;i++){
	A=a[i]*a[i];
	B=b[i]*b[i];
	C=c[i]*c[i];
		if(C==A+B || A==B+C || B==A+C){
			printf("YES\n");
		}

		else{
			printf("NO\n");
		}
	}
	return 0;
}
