#include<stdio.h>
int main(){
	int S, h, m, s;
	scanf("%d", &S);
	m = S/3600;
	h = (S-m*3600)/60;
	s = (S%3600)%60;
	printf("%d:%d:%d\n",m ,h ,s);
	return 0;
}