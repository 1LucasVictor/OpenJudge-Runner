#include <stdio.h>
main() {
	char pass[4];
	int a=0;
	scanf("%s",&pass );

	for (int i= 0; i<3; i++) {
		if (pass[i]!=pass[i+1]) {
			continue;
		} else {
			a=1;
		}
	}
	if (a==1) {
		printf("Bad");
	} else printf("Good");
}

