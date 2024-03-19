#include <stdio.h>

int main(void) {

	int a[100];
	int b,c,i,j;
	
	scanf("%d",&b);
		
	for(i=0;i<b;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<b;i++){
		for(j=i+1;j<b;j++){
			c=a[i];
			a[i]=a[j];
			a[j]=c;
		}
	}
	
	for(i=0;i<b;i++){
		if(i!=0){
			printf(" ");
		}
		printf("%d",a[i]);
	}
	printf("\n");
	
	return 0;
}