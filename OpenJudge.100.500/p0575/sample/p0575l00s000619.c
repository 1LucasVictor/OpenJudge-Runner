#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#define MOD 1000000007
#define MAX(a,b) (a>b?a:b)
#define MAX3(a,b,c) MAX(a,MAX(b,c))
#define MIN(a,b) (a<b?a:b)
#define MIN3(a,b,c) MIN(a, MIN(b,c))
typedef long long lli;
typedef struct {
    int tate;
    int yoko;
} lamp;

int main()
{
    int x,a;
    scanf("%d%d",&x,&a);
    printf(x<a?"0":"10");
    return 0;
}
