#include <stdio.h>
int main(void) {
	int n;
	scanf("%d",&n);
	n <= 100;
	int a[n];
	int i, j, k;
	for(i=0; i<=n; i++){
		scanf("%d",&a[i]);
	}
		for(j=0; j<n/2; j++){
		scanf("%d",&k);
			k = a[j];
			a[j] = a[n-j-1];
			a[n-j-1] = k;
		}
	for(k=0; k<n; k++){
		scanf("%d",&a[k]);
		if(k>0){
				printf(" ");
				printf("%d",a[k]);
			}
		else if(k==0){
				printf("%d",a[k]);
			}
	}
	printf("\n");
	return 0;
}

