#include<stdio.h>

int main() {
	int i = 0, tf = 0;
	char a[100], b[100];
	scanf("%s", a);
	scanf("%s", b);

	for (i = 0; a[i] != '\0';i++) {
		if (a[i] != b[i]) {
			tf = 1;
		}
	}


	if (tf == 0) {
		printf("Yes\n");
	}
	else if(tf==1) {
		printf("No\n");
	}
	return 0;
}