#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

#define max 200000

//qsort(str, n, sizeof(int), up_comp);
int up_comp(const void *a, const void *b){return *(int*)a - *(int*)b;}
int down_comp(const void *a, const void *b){return *(int*)b - *(int*)a;}
int count_digit(int a){int i=0;while(a!=0){a=a/10;i++;}return i;}
int euclid( int a, int b ){int temp;if(a<b){temp=a;a=b;b=temp;}if(b<1)return -1;if(a%b==0) return b;return euclid(b,a%b);}

int main()
{
    int n, i, num_joshi[max], joshi[max];
    
    scanf("%d", &n);
    for (i=2; i<=n; i++) {
        scanf("%d", &num_joshi[i]);
    }
    
    for (i=2; i<=n; i++) {
        joshi[num_joshi[i]]++;
    }
    
    for (i=1; i<=n; i++) {
        printf("%d\n", joshi[i]);
    }
    
    return 0;
}

