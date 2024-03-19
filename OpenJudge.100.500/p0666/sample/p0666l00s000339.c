#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MOD 1000000007
#define ll long long

int cmpfunc(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

void swap(int *a, int *b);

int main(int argc, char **argv){
    int x,a,b;
    scanf("%d %d %d",&x,&a,&b);
    if(a>=b) printf("delicious\n");
    else if(b-a>x) printf("dangerous\n");
    else printf("safe\n");

    return 0;
}

void swap(int *a, int *b){
    int tmp=*a;
    *a = *b;
    *b = tmp;
}
