
#define TEST_SNO	1
#define TEST_ENO	2

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *in, *ans;
int t;
int v[5];
int k;

int
out(const char *s)
{
#ifdef TEST
	char buf[8192];
	fgets(buf, sizeof(buf), ans);
	if (strcmp(buf, s)) {
		printf("err\n");
	}
#else
	printf(s);
#endif
	return 0;
}

int
outi(int i)
{
	char s[128];
	sprintf(s, "%d\n", i);
	out(s);
	return 0;
}

int
getint()
{
	int i;
	fscanf(in, "%d", &i);
	return i;
}

int
getstr(char *s)
{
	fscanf(in, "%s", s);
	return 0;
}

int
sortfnc(const void *v1, const void *v2)
{
	int *i1 = (int *)v1;
	int *i2 = (int *)v2;

	if (*i1 > *i2) {
		return 1;
	}
	else if (*i1 < *i2) {
		return -1;
	}

	return 0;
}

int
chk()
{
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (v[j] - v[i] > k) {
				return -1;
			}
		}
	}
	return 0;
}

int
fnc()
{
	for (int i = 0; i < 5; i++) {
		v[i] = getint();
	}
	k = getint();
	int r = chk();
	if (r == 0) {
		out("Yay!\n");
	}
	else {
		out(":(\n");
	}

	return 0;
}

int
main()
{
#ifdef TEST
	for (t = TEST_SNO; t <= TEST_ENO; t++) {
		char str[128];
		sprintf(str, "test%d.txt", t);
		in = fopen(str, "r");
		sprintf(str, "ans%d.txt", t);
		ans = fopen(str, "r");
		fnc();
		fclose(in);
		fclose(ans);
	}
	printf("end\n");
#else
	in = stdin;
	fnc();
#endif

	return 0;
}
