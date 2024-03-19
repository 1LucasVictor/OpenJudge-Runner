#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i, one_c=0, two_c=0;
	char s[4], one, two;
	for (i = 0; i < 4; i++){
		scanf("%c", &s[i]);
	}
for (i = 0; i < 4; i++) {
	if (s[0] != s[i]) {
		one =s[0];
		two =s[i];
	}
}

for (i = 0; i < 4; i++) {
	if (s[i]==one) {
		one_c++;
	}
	if (s[i] == two) {
		two_c++;
	}
}

if (one_c == 2 && two_c == 2) {
	puts("Yes");
}
else {
	puts("No");
}
    return 0;
}

