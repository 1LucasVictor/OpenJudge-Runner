#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

#define rep(i,begin,end) for(int i=begin; i<end; i++)
#define revrep(i,begin,end) for(int i=begin; i>end; i--)
#define lld long long int

int main(){
    lld h;
    int n;
    scanf("%lld %d", &h, &n);
    lld sum = 0;
    rep(i, 0, n){
        lld b;
        scanf("%lld", &b);
        sum += b;
    }
    printf(sum >= h ? "Yes" : "No");

    return 0;
}