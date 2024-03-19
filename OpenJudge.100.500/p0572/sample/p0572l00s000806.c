#include<stdio.h>

int main(){

    long l,r;
    scanf("%ld %ld",&l,&r);

    int min = 2019;
    for(long i=l;i<r;i++){
        for(int j=i+1;j<=r;j++){
            if((i*j)%2019<min){
                min=(i*j)%2019;
            }
            if(min<i&&min<j)break;
        }
    }
    printf("%ld\n",min);

    return 0;
}