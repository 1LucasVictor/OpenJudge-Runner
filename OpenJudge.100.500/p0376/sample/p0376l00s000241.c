#include <stdio.h>

int main(void) {
	int a,i;
	scanf("%d",&a);
	int num[a];
	
	for(i=0;i<a;i++){
		scanf("%d",&num[(a-1)-i]);

	}
	for(i=0;i<a;i++){
		printf("%d",num[i]);
		if(i  != a-1){
			printf(" ");
		
		}
	}
		printf("\n");
	return 0;
}