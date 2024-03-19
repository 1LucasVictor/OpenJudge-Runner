#include<stdio.h>
#include<string.h>

int main() {
	int hp, atk, t;
	scanf("%d %d", &hp, &atk);
	t = hp / atk;
	if (hp%atk != 0) {
		t = t + 1;
	}
	printf("%d", t);
}