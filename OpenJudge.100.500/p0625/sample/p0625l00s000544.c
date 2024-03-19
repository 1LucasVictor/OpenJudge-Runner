#include<stdio.h>
int main() {
	int a, b;;
	scanf("%d %d",&a,&b);
	if (a >= 1 && b >= 1 && a + b <= 16) {
		if (a <= 8 && b <= 8) {
			printf("Yay!\n");
		}
		else {
			printf(":(\n");
		}
	}
	else {
		printf(":(\n");
	}

}