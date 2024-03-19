#include <stdio.h>

void readInt(int *x) {
	scanf("%d", x);
	return;
}
void readInts(int n, int arr[]) {
	int i;
	for (i=0;i<n;i++) {
		readInt(&arr[i]);
	}
}
void readChar(char *x) {
	scanf("%c", x);
	return;
}
void readChars(int n, char x[]) {
	scanf("%s", x);
	return;
}
void printInts(int n, int *arr) {
	int i;
	for (i=0;i<n;i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return;
}

int main(int argc, char const *argv[])
{
	int n;
	int arr[256];
	readInt(&n);
	readInts(n,arr);
	int i;
	int boo = 1;
	for (i=0;i<n;i++) {
		if (arr[i]%2==0) {
			if (arr[i]%3==0 || arr[i]%5==0) {
				boo = 1;
			}else{
				boo = 0;
				break;
			}
		}
	}
	if (boo==1) {
		printf("APPROVED\n");
	}else{
		printf("DENIED\n");
	}

	return 0;
}