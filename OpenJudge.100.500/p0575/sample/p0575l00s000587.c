#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef long long int ll;
#define mod 1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define m0(x) memset(x,0,sizeof(x))

//qsort用(昇順，降順)
int cmp_asc( const void *p, const void *q ) {
    return *(int*)p - *(int*)q;
}
int cmp_desc( const void *p, const void *q ) {
    return *(int*)q - *(int*)p;
}

int main(void){
    int x,a;
    scanf("%d%d",&x,&a);
    if(x<a) printf("0\n");
    else printf("10");
    return 0;
}