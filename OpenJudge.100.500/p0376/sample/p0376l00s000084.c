#include <stdio.h>
int main(void) {
	int a[101],n,i;
	scanf("%d",&n);
	for(i=n;i;i--){
		scanf("%d",&a[i]);
	}
	for(i++;i<=n;i++){
		if(i!=1){
			printf(" %d",a[i]);
		}else{
			printf("%d",a[i]);
		}
	}
	printf("\n");
	return 0;
}