#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

#define rep(i,begin,end) for(int i=begin; i<end; i++)
#define revrep(i,begin,end) for(int i=begin; i>end; i--)
#define lld long long int

int cmpAsc(const void* a, const void* b){
    int x = *(int*)a, y = *(int*)b;
    if(x > y){
        return 1;
    }
    if(x < y){
        return -1;
    }
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    rep(i, 0, n){
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), cmpAsc);
    int f = 1;
    rep(i, 1, n){
        if(a[i] == a[i-1]){
            f = 0;
        }
    }
    if(f){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}