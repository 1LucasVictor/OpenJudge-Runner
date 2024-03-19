#include <stdio.h>
int main(){
	int i,j,n;
	int A[200000];
	int max,d;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	max=A[1]-A[0];
	for(i=0;i<=n-2;i++){
		for(j=i+1;j<=n-1;j++){
			d=A[j]-A[i];
			if(d>=max){
				max=d;
			}
		}
	}
	printf("%d\n",max);
	return 0;
}