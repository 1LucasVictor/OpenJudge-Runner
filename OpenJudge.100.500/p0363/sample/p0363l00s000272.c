#include <stdio.h>
void swing(int* a, int* b){
	int c;
	if(*a > *b){
		c = *b; *b = *a; *a = c;
	}
}
int main(void){
	int l, m, n;
	scanf("%d%d%d", &l, &m, &n);
	swing(&l, &m); swing(&l, &n); swing(&m, &n);
	printf("%d %d %d\n", l, m, n);
	return 0;
}
