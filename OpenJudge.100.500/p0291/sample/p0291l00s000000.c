#include <stdio.h>
#define N 20000

int main(){
	int max=0;
	int a[N];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	max=a[1]-a[0];
	for (int k = 0; k < n; k++){
		for (int s = 0; s < k; s++){
			if ((a[k]-a[s])>max){
				max=(a[k]-a[s]);
			}else{
			}
		}
	}
	printf("%d\n", max);
	return 0;
}