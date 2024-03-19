#pragma warning(disable: 4996)
#include<stdio.h>

int sec, h, m, s, hp, mp;

int main() {
	scanf("%d", &sec);
		h = sec / 3600;
		hp = sec % 3600;
		m = hp / 60;
		mp = hp % 60;
		s = mp;
	
		printf("%d:%d:%d\n", h, m, s);

		return 0;
	
}
