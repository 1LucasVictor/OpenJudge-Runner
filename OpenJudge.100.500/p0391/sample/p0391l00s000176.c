#include<stdio.h>
#include<string.h>
#define anD &&
#define oR ||
#define max(a,b) ((a)>=(b))?(a):(b)
#define min(a,b) ((a)<=(b))?(a):(b)
#define rep(i,n) for((i)=0;(i)<(n);(i)++)

void meirei_print(const int a,const int b, char str[]) {
	int i;
	for (i = a; i <= b; i++) {
		printf("%c", str[i]);
	}
	printf("\n");
}

void meirei_reverse(const int a, const int b, char str[]) {
	int i;
	char temp;
	for (i = 0; i <= (b - a) / 2; i++) {
		temp = str[a + i];
		str[a + i] = str[b - i];
		str[b - i] = temp;
	}
}

void meirei_replace(const int a, const int b, char str[], const char p[]) {
	int i;
	rep(i, b - a + 1) {
		str[a + i] = p[i];
	}
}




int main() {
	char str[1001];
	char meirei[10];

	scanf("%s", str);
	int n;
	scanf("%d", &n);
	int i;
	rep(i, n) {
		int a, b;
		char p[1001];
		scanf("%s %d %d", meirei,&a,&b);
		if (strcmp(meirei, "print") == 0) {
			meirei_print(a, b, str);
		}
		if (strcmp(meirei, "reverse")==0) {
			meirei_reverse(a, b, str);
		}
		if (strcmp(meirei, "replace")==0) {
			scanf("%s", p);
			meirei_replace(a, b, str, p);
		}
	}
	return 0;
}