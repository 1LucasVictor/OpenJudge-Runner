#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Min(a, b) ((a) > (b) ? (b) : (a))
#define abs(x) ((x) > 0 ? (x) : -(x))
#define pri(x) (printf("%d", x))
#define prll(x) (printf("%lld", x))
#define sci(x) (scanf("%d", &x))
#define scll(x) (scanf("%lld", &x))
#define endl printf("\n");
typedef long long ll;

int
main(int argc, char *argv[])
{
int n, a, b;
sci(n); sci(a);sci(b);
pri(Min(a*n, b));
return 0;
}
