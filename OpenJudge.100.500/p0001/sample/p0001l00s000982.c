#include <stdio.h>

int main(void){
	int a = 0 , b = 0 , c = 0 , keta = 0;
	
	while(scanf("%d%d" ,&a ,&b) != EOF){
		c = a + b;
		while(c > 0){
			keta++;
			c = c / 10;
		}
		printf ("%d\n" ,keta);
		a = 0 ; b = 0 ; c = 0 ; keta = 0;
	}
	
	return (0);
}