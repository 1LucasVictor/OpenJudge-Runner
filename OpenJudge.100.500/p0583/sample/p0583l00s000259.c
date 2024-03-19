
#define ll				long long
#define MOD				1000000007
#define VTX_MAX			10000
#define EDGE_MAX		10000

#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


FILE *in, *ans;
int tno;

int out(const char *s) {
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

int outi(int i) {
	char s[128];
	sprintf(s, "%d\n", i);
	out(s);
	return 0;
}

int outd(double d) {
	char s[128];
	sprintf(s, "%.10lf\n", d);
	out(s);
	return 0;
}

int outll(ll l) {
	char s[128];
	sprintf(s, "%lld\n", l);
	out(s);
	return 0;
}

int geti() {
	int i;
	fscanf(in, "%d", &i);
	return i;
}

ll getll() {
	ll l;
	fscanf(in, "%lld", &l);
	return l;
}

int getstr(char *s) {
	fscanf(in, "%s", s);
	return 0;
}

int n, a, b, c, d;
char s[200010];

int move(int f, int t) {
	int i;
	int ret = 0;

	if (f > 0) {
		if (s[f - 1] == '.') {
			if (s[f + 1] == '.') {
				ret = 1;
			}
		}
	}
	for (i = f; i < t; i++) {
		if (s[i + 1] == '#') {
			if (s[i + 2] == '#') {
				return -1;
			}
			i++;
		}
		else {
			if (s[i + 2] == '.') {
				ret = 1;
			}
		}
	}

	return ret;
}

int fnc2() {
	int i, j, k;

	n = geti();
	a = geti() - 1;
	b = geti() - 1;
	c = geti() - 1;
	d = geti() - 1;
	getstr(s);

	int ret = move(b, d);
	if (ret < 0) {
		return -1;
	}

	int ret2 = move(a, c);
	if (ret < 0) {
		return -1;
	}

	if (c > d) {
		if (ret != 1) {
			return -1;
		}
	}

	return 0;
}

int fnc1() {
	int ret = fnc2();
	if (ret == 0) {
		out("Yes\n");
	}
	else {
		out("No\n");
	}
	return 0;
}

int main() {

#ifdef TEST
	for (tno = TEST_SNO; tno <= TEST_ENO; tno++) {
		char str[128];
		sprintf(str, "test%d.txt", tno);
		in = fopen(str, "r");
		sprintf(str, "ans%d.txt", tno);
		ans = fopen(str, "r");
		fnc1();
		fclose(in);
		fclose(ans);
	}
	printf("end\n");
#else
	in = stdin;
	fnc1();
#endif

	return 0;
}
