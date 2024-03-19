// AtCoder ABC131: A - Security
// 2019.9.3 bal4u

#include <stdio.h>

int main()
{
	char i, s[10];
	
	scanf("%s", s);
	for (i = 1; s[i]; i++) {
		if (s[i] == s[i-1]) { puts("Bad"); return 0; }
	}
	puts("Good");
	return 0;
}
