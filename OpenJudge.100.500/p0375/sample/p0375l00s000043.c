#include<stdio.h>

int main(){

	int n, i=0,a=0;

	scanf("%d", &n);

	while (n>i){
		i++;
		if (i % 3 == 0){

			printf(" %d", i);

		}

		else if (i % 10 == 3 || i / 100 == 3 || i / 1000 == 3){

			printf(" %d", i);

		}

		else{

			a = i / 1000;
			if (a % 10 == 3){

				printf(" %d", i);

			}
			

		}



	}
	printf("\n");
	return 0;
}