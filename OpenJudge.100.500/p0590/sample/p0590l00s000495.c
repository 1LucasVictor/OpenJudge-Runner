#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,a[5];
	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
	}

	int j,l,flag = 0;
	for(j=0;j<5;j++){
		for(l=0;l<4;l++){
			if(a[5]<abs(a[j]-a[l])){
			flag = 1;
			}
		}
	}

	if(flag == 0){
		printf("Yay!");
	}else if(flag == 1){
		printf(":(");
	}

	return 0;
}
