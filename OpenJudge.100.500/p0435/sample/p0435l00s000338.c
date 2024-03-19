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
 
    int n, d, x[max], y[max];
    int ans=0;
    
    scanf("%d%d", &n, &d);
    rep(i, n){
        scanf("%d%d", &x[i], &y[i]);
        if (sqrt(pow(x[i], 2)+pow(y[i], 2))<=d) {
            ans++;
        }
    }
    
    printf("%d", ans);
    
    return 0;
}
