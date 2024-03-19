#include <stdio.h>

int main(void){
	int a[5], k;

	scanf("%d",&a[0]);
	scanf("%d",&a[1]);
	scanf("%d",&a[2]);
	scanf("%d",&a[3]);
	scanf("%d",&a[4]);
	scanf("%d",&k);

	int flag = 0;

	for(int i=0; i<5; i++){
		for(int j=0;j<5;j++){
			if(abs(a[j]-a[i]) <= k){
				flag += 1;
			}
		}
	}


	if(flag!=25){
		printf(":(\n");
	}else{
		printf("Yay!\n");
	}
}