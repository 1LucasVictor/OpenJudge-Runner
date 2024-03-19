#include<stdio.h>

int main(void){

	int a[10000];

	int i, j,n,z,s;

	scanf("%d",&n);

	for (i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++){
		for (j = i+1; j <= n - 1; j++){

			if (a[i]>a[j]){
				z = a[i];
				a[i] = a[j];
				a[j] = z;
			}

		}
	}
	s = a[0];
	for (i = 1; i < n; i++){
		s = s + a[i];
	}
	printf("%d %d %d\n",a[0],a[n-1],s);

	return 0;
}