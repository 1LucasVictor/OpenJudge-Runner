#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef long long int ll;
void swap(ll *x, ll *y) {
    ll temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
ll asc(const void *a, const void *b) { return *(ll *)a - *(ll *)b; }
ll desc(const void *a, const void *b) { return *(ll *)b - *(ll *)a; }
ll max(ll x, ll y) { return x > y ? x : y; }
ll min(ll x, ll y) { return x > y ? y : x; }
/*void qsort(配列のアドレス,配列のサイズ,sizeof(配列の型),比較関数(昇順or降順))
 */

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int start,end;
    start=a<c?c:a;
    end=b<d?b:d;
    if (end - start > 0) printf("%d\n", end - start);
    else printf("0\n");

    return 0;
}