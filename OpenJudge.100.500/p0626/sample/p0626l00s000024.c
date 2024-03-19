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
	if(n!=100)
		printf("%d\n", n*tmp);
	else
		printf("%d\n", 101*tmp);
	return 0;
}


