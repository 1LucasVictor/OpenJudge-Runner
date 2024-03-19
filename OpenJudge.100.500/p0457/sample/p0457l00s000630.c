#include<stdio.h>
#include<string.h>
#include<stdlib.h>

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
    int min;
    for(int i=0;i<n+m-1;i++){
        min= i;
        for(int j=i+1;j<n+m;j++){
            if(book[j]<book[min]){
                min=j;
            }
        }
        if(min != i) {
            int temp = book[min];
            book[min] = book[i];
            book[i] = temp;
        }
    }

    long long int count=0,i=0;

    while(k>=book[i]){
        k=k-book[i];
        count++;
        i++;
    }
    printf("%lld\n",count);
    return 0;
}