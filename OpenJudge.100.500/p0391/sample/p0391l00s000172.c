#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include<stdio.h>
#include<string.h>
#define N 1002
void Print(int,int,char *);
void Reverse(int, int, char *);
void Replace(int, int, char *);

int main() {
	char str[N], *p,op[N];
	int a, i,q,b;
	scanf("%s", str);
	scanf("%d", &q);
	for (i = 0; i < q; i++) {
		p = str;
		scanf("%s %d %d", op, &a, &b);
		if (strcmp(op, "print")==0) Print(a, b, p);
		if (strcmp(op, "reverse")==0) Reverse(a, b, p);
		if (strcmp(op, "replace")==0) Replace(a, b, p);
	}
	//printf("%s\n", p);
	return 0;
}
void Print(int a, int b, char *p) {
	for (; a <= b; a++)
		printf("%c", *(p + a));
	putchar('\n');
}
void Reverse(int a, int b, char *p) {
	char tmp[N]="",*p2;
	int i;
	strcat(tmp, p);
	p2 = tmp;
	for (i = 0; i < a; i++) *(p++) = *(p2 + i);
	for (i = b; a <= i; i--) *(p++) = *(p2 + a + i);
	for (i = b + 1; i < strlen(p)-1; i++)*(p++) = *(p2 + b + i);
}

void Replace(int a, int b, char *p) {
	char s[N] ,*pp;
	int i;
	scanf("%s", s);
	pp = s;
	for (i = a; i <= b; i++) {
		*(p + i) = *pp;
		*(pp++);
	}
}