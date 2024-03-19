#include <stdio.h>
int main()
{
	int a, b, c, i;
	int n=0;
	scanf("%d %d %d", &a, &b, &c);
	for(i=a; i<=b; i++){
		int mod= c % i; /*modは％を使って計算できる*/
		if(mod == 0){
			n++;
		}
	}
	printf("%d\n", n);
	return 0;
}