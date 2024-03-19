#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
int compare(const void *a,const void *b){
    if(*(long long *)a>*(long long *)b)return 1;
    return -1;
}
int main(int argc, const char * argv[]) {
    long long n;
    scanf("%lld",&n);
    if(n>=30)
        printf("Yes");else printf("No");
    return 0;
}
