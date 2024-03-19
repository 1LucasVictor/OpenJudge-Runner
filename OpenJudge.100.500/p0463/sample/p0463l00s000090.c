#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define rep(i, n) for(int i=0; i<(n); ++i)
#define max  100001

//qsort(str, n, sizeof(int), up_comp);
int up_comp(const void *a, const void *b){return *(int*)a - *(int*)b;}
int down_comp(const void *a, const void *b){return *(int*)b - *(int*)a;}
int int_sort( const void * a , const void * b ) {return strcmp(( char * )a , ( char * )b );}
int count_digit(int a){int i=0;while(a!=0){a=a/10;i++;}return i;}
int euclid( int a, int b ){int temp;if(a<b){temp=a;a=b;b=temp;}if(b<1)return -1;if(a%b==0) return b;return euclid(b,a%b);}
//void ret_digit(int a){rep(i, count_digit(a)){Dig[i]=a%10;a/=10;}}

int main(void){
 
    int n, y;

    scanf("%d", &n);
    
    y=n%100;
    y=y%10;
    
    if (y==2||y==4||y==5||y==7||y==9) {
        printf("hon");
    } else if (y==0||y==1||y==6||y==8) {
        printf("pon");
    } else if(y==3){
        printf("bon");
    }

    return 0;
}

