#include <stdio.h>

int main(void)
{
	int n;
	float kane = 100000;
	int kane_int = 100000;
	
	scanf("%d", &n);
	
	while (n != 0){
		kane *= 1.05;
		kane_int = kane;
		if ((kane_int % 1000) != 0){
			kane += 1000 - (kane_int % 1000);
		}
		
		n--;
	}
	
	printf("%.0f\n", kane);
	
	return (0);
}