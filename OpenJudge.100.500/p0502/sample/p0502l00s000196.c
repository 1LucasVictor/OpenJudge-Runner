#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	int a[100];
	int n,i;
	int flag=0;


	i=0;

	scanf("%d",&n);

	while(i<n){
	scanf("%d",&a[i]);


	if(a[i]%2==0){

		if(a[i]%3!=0 && a[i]%5!=0){
			flag=1;
			printf("DENIED");
			break;
		}

	}
	i++;
	}


	if(flag==0){
		printf("APPROVED");
	}

	return 0;
}

