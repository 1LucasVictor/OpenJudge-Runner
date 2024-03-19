#include<stdio.h>
int main() {
	int S;
	int h=0, m=0, s=0;
	scanf("%d",&S);
	h = S / 3600;
	S = S - (3600 * h);
	m = S / 60;
	s = S - (60 * m);
	printf("%d:%d:%d\n",h, m, s);
	return 0;
}
