#include<stdio.h>
int main(void) {
	char a[5];
	int i, j;
	int ans = 0;
	scanf("%s", &a);
	
	int count = 0;
	int count2 = 0;
	char count3;
	char count4;


	count3 = a[0];

	for (i = 1; a[i] != '\0'; i++) {
		if (count3 != a[i]) {
			count4 = a[i];
			break;
		}
	}
	

	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] == count3) {
			count++;
			if (count > 2) {
				printf("No\n");
				break;
			}
		}
		else if (a[i] == count4) {
			count2++;
			if (count2 > 2) {
				printf("No\n");
				break;
			}
		}
		else {
			printf("No\n");
			break;
		}
	}

	if (count == 2 && count2 == 2) {
		printf("Yes\n");
	}

	return 0;
}