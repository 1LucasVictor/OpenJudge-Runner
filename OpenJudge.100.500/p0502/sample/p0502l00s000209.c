#include <stdio.h>
int main(){
	int n,k = 1;
	scanf("%d",&n);
	int a[n];
	for (int i = 0;i < n;i++)
		scanf("%d",&a[i]);
	for (int i = 0;i < n;i++){
	if(a[i] % 2 == 0){
	if ((a[i] % 3 == 0)||(a[i] % 5 == 0)){
			k = 0;
			break;}
	}
	}
	if(k == 0) printf("APPROVED");
	else printf("DENIED");
}