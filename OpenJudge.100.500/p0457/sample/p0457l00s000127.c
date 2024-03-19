#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void){
    long long int n,m,k;
    scanf("%lld %lld %lld",&n,&m,&k);
    long long int book[n+m];
    for(int i=0;i<n;i++){
        scanf("%lld", &book[i]);
    }
    for(int i=n;i<n+m;i++){
        scanf("%lld", &book[i]);
    }

    qsort(book,n+m,sizeof(long long int),cmpfunc);
    int count=0,i=0;
    while(k>=book[i]){
        k=k-book[i];
        count++;
        i++;
    }
    printf("%d\n",count);
    return 0;
}