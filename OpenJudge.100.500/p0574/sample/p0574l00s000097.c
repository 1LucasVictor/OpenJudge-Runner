#include<stdio.h>
#include<math.h>
#include<string.h>
#define FOR(n) for(int i = 0;i < n;i++)
#define PRN(n) printf("%d\n",n);
#define PRS(s) printf("%s\n",s);
int main(void) {
	char s[5];
	scanf("%s", s);
	if (s[0] == s[1] || s[1] == s[2] || s[2] == s[3]) {
		PRS("Bad");
	}
	else {
		PRS("Good");
	}
	return 0;
}