#include <stdio.h>

int main(){

	int n, cnt=0, i, j;
	int a[100000];

	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}

	for(i=0; i<n; i++){
		for(j=2; j<a[i]; j++){
			if(a[i]%j == 0){
				j=a[i];
			}
		}
		if(j==a[i]){
			cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}