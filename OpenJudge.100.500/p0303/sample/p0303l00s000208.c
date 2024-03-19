/*
 * FileName:     allocation_fix_2
 * CreatedDate:  2020-07-07 14:54:36 +0900
 * LastModified: 2020-07-07 16:03:00 +0900
 */

#include <stdio.h>
#include <stdlib.h>
int check(long int *w, long int n, long int k, long int p){
    long int sum = 0;
    long int idx = 0;
    for(long int i=0;i<k;i++){
        sum = 0;
        while(w[idx]+sum <= p){
            sum += w[idx];
            idx++;
            if( idx==n )return 1;
        }
    }
    return 0;
}

int main(void){
    long int n, k;scanf("%ld%ld", &n, &k);
    long int *w = malloc(n*sizeof(long int));
    for(long int i=0;i<n;i++)scanf("%ld", w+i);
    long int left = 0, right = 100000*10000;
    while( left+1<right ){
        long int middle = (left+right)/2;
//        printf("left:%ld, middle:%ld, right:%ld\n", left, middle, right);
        if(check( w, n, k, middle)) right=middle;
        else left = middle;
    }
    printf("%ld\n", right);
    free(w);
    return 0;
}

