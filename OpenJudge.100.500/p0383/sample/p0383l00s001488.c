#define dbg(fmt,...) fprintf(stderr,fmt,__VA_ARGS__)
#define dpri(x) dbg(#x ": %d\n", x)
#define dprs(x) dbg(#x ": %s\n", x)
#include <stdio.h>
typedef long long ll;
const int MYINF = 1e9+7;

static int a[110][110], b[110][110], c[110][110];

int main(int argc, char **argv)
{
	int n, m, l, i, j, k;
	const char *sp;
	scanf("%d %d %d", &n, &m, &l);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < l; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < l; j++) {
			for (k = 0; k < m; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for (i = 0; i < n; i++) {
		sp = "";
		for (j = 0; j < l; j++) {
			printf("%s%d", sp, c[i][j]);
			sp = " ";
		}
		putchar('\n');
	}
	return 0;
}