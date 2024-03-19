#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define rep(i, n) for(int i=0; i<(n); ++i)
#define max  200001

//qsort(str, n, sizeof(int), up_comp);
int up_comp(const void *a, const void *b){return *(int*)a - *(int*)b;}
int down_comp(const void *a, const void *b){return *(int*)b - *(int*)a;}
int int_sort( const void * a , const void * b ) {return strcmp(( char * )a , ( char * )b );}
int count_digit(int a){int i=0;while(a!=0){a=a/10;i++;}return i;}
int euclid( int a, int b ){int temp;if(a<b){temp=a;a=b;b=temp;}if(b<1)return -1;if(a%b==0) return b;return euclid(b,a%b);}

int main(void){
 
    int n, m, k;
    int a[max], b[max];
    
    scanf("%d%d%d", &n, &m, &k);
    rep(i, n){
        scanf("%d", &a[i]);
    }

    rep(i, m){
        scanf("%d", &b[i]);
    }
    
    int cnt=0;
    int i=0, j=0;
    int ans=0;
    while(1){
        if (ans==n+m||cnt>k) {
            if (cnt>k) {
                ans--;
            }
            break;
        }
        if (a[i]>=b[j]) {
            if (j<m) {
                cnt+=b[j];
                j++;
                ans++;
            } else {
                cnt+=a[i];
                i++;
                ans++;
            }
        } else if (a[i]<=b[j]) {
            if (i<n) {
                cnt+=a[i];
                i++;
                ans++;
            } else {
                cnt+=b[j];
                j++;
                ans++;
            }
        }
    }
    
    printf("%d", ans);
    
    return 0;
}

