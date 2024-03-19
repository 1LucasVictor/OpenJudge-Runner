#include<stdio.h>

int main(){

    long l,r;
    scanf("%ld %ld",&l,&r);

    int min = 5000;
    for(long i=l;i<r;i++){
        for(int j=i+1;j<=r;j++){
            if((i*j)%2019<min){
                min=(i*j)%2019;
            }
        }
    }
    printf("%ld\n",min);

    return 0;
}