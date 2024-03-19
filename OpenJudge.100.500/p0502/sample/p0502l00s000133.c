#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int n;
	int a;
	int i;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(a%2==0){
			if(a%3!=0&&a%5!=0){
				printf("DENIED");
				exit(0);
			}
		}
	}
	printf("APPROVED");
	return 0;
}
