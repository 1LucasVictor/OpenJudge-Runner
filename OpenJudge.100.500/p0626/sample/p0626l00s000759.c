#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>

int main(){
	int d, n, tmp;
	scanf("%d %d\n", &d, &n);
	if(d==0) tmp = 1;
	else if(d==1) tmp = 100;
	else tmp = 10000;
	printf("%d\n", n*tmp);
	return 0;
}


