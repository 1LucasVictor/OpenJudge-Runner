#include<stdio.h>
#include<stdlib.h>
int main(void){
	int h, n;
	int *a;
	scanf("%d", &h);
	scanf("%d", &n);
	a = (int *)malloc(sizeof(int) * n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int j=0; j<n; j++){
		h -= a[j];
	}
	if(h<=0){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	return 0;
}
