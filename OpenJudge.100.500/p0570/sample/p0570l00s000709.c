#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ll long long
void swap(ll *x,ll *y){ll temp;temp=*x;*x=*y;*y=temp;}
ll gcd(ll p,ll q){for(ll t;q;)t=p%q,p=q,q=t;return p;}
ll lcm(ll p,ll q){return p/gcd(p,q)*q;}
ll asc(const void *a,const void *b){return *(ll*)a-*(ll*)b;}
ll desc(const void *a,const void *b){return *(ll*)b-*(ll*)a;}
// qsort(array, length, sizeof(int), asc);

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a>b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    int i;
    int j = 0;
    for( i=a; i<=b; i++){
        if(abs(a-i) == abs(b-i)){
            printf("%d\n", i);
            j++;
            break;
        }
    }
    
    
    
    if(j == 0){
        printf("IMPOSSIBLE\n");
    }
    return 0;
}