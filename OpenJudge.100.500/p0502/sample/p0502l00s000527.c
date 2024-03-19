#include <stdio.h>
int main(){
	int n,k = 0;
	scanf("%d",&n);
	int a[n];
	for (int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	if(a[i] % 2 == 0){
	if ((a[i] % 3 == 0)||(a[i] % 5 == 0)){
			k = 1;}
	}
	}
	if(k == 1) printf("APPROVED");
	else printf("DENIED");
}
