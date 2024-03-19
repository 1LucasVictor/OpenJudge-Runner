#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>
#include<stdbool.h>
#include<tgmath.h>
#include<sys/queue.h>
#include<time.h>
#define ll long long
#define min(a, b) ((a) > (b) ? (b) : (a))
#define max(a, b) ((a) > (b) ? (a) : (b))
#define miin(a, b, c) min((a), min((b), (c)))
#define maax(a, b, c) max((a), max((b), (c)))
#define mod 1000000007

int a, b, c, k;

main(){
    scanf("%d%d%d%d", &a, &b, &c, &k);
    printf("%d\n", min(k, a) - max(0, k-a-b));
}