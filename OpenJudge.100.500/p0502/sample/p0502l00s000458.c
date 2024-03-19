#include <stdio.h>

int main(void) {

	int n, x=1;	scanf("%d", &n);

	int num[n];

	for (int i=0; i<n; ++i) scanf("%d", &num[i]);

	for (int i=0; i<n; ++i) {

		if (num[i]%2==0){

			if(num[i]%3!=0 && num[i]%5!=0) {

				x=0;

				break;

			}		

		}

	}

	if (x) puts("APPROVED\n");

	else puts("DENIED\n");

	return 0;

}