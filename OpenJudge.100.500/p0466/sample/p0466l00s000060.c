#include<stdio.h>
int main(void) {
	int i=0;
	int j = 0;
	char ID[99];
	char T[99];
	scanf("%s", ID);
	scanf("%s",T);
	while (ID[i] != '\0') {
		if (ID[i]==T[i]) {
			j++;
	}
		i++;
	}
	if (j == i) {
		printf("Yes");
	}
	else {
		printf("No");

	}
return 0;
}