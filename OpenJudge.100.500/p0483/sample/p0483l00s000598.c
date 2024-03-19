#include <stdio.h>

int main() {
	char x[3];
	scanf("%s", x);
	printf("%s", (x[0]=='7'||x[1]=='7'||x[2]=='7')?"Yes":"No");
	return 0;
}