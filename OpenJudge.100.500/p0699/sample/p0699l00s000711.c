#include <stdio.h>
#include <stdlib.h>


int main() {
	int a, b, c;
	int num_5=0;
	int num_7=0;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if (a == 5){
		num_5 ++;
	}if (b == 5){
		num_5++;
	}if (c == 5){
		num_5++;
	}if (a == 7){
		num_7++;
	}if (b == 7){
		num_7++;
	}if (c == 7){
		num_7++;
	}
	
	if (num_5==2 && num_7 == 1){
		printf("YES\n");
	}else{
		printf("NO\n");
	}

	


	return 0;
}
