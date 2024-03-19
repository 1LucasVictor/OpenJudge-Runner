#include <stdio.h>
int main(){
	int a,b,x;
	scanf("%d%d%d", &a, &b, &x);
	printf(((x<a)||(a+b<x))?"NO":"YES");
	return 0;
}