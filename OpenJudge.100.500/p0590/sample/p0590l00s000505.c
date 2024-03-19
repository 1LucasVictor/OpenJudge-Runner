#include <stdio.h>

int main(){
	int a[10],k;

	scanf("%d",&a[0]);
	scanf("%d",&a[1]);
	scanf("%d",&a[2]);
	scanf("%d",&a[3]);
	scanf("%d",&a[4]);
	scanf("%d",&k);

	for(int i=0;i<5;i++){
		for(int j=1;j<5;j++){
			if(a[j]-a[i] > k){
				printf(":(\n");
				return 0;
			}
		}
	}
	printf("Yay!\n");
	return 0;
}