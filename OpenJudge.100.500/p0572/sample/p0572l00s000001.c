#include<stdio.h>
#include<limits.h>
int main(void){
    long int l, r;
    scanf("%ld %ld", &l, &r);
    int k=r-l;
    if(r-l>2019){
        k=2019;
    }
    long int t=100000000, s;
    for(long int i=l; i<=l+k; i++){
        for(long int j=i+1; j<=l+k; j++){
            s=(i%2019)*(j%2019)%2019;
            // printf("%ld\n", s);
            if(t>s){
                t=s;
            }
            if(t==0){
                break;
            }
        
        if(t==0){
            break;
        }
        }
    }
    printf("%ld", t);
    return 0;


}