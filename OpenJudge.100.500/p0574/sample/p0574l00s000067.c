#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(void)
{
	int b;
	int a[4];

	scanf("%d", &b);

	a[0] = b /1000;
	b = b-a[0]*1000;
	a[1] = b /100;
	b = b-a[1]*100;
	a[2] = b /10;
	b = b-a[2]*10;
	a[3] = b;


	if(a[0] == a[1] || a[1] == a[2] || a[2] == a[3]){
		printf("Bad");
	} else{
		printf("Good");
	}

	return 0;
}