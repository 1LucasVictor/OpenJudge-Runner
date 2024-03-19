#include<stdio.h>
#include<string.h>

int main() {
	int hp, t, atk,tatk=0;
	scanf("%d %d", &hp, &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &atk);
		tatk = tatk + atk;
	}
	if (tatk > hp) {
		printf("Yes");
	}
	else {
		printf("No");
	}
}