#include<stdio.h>

int main(){
    long minus;
    long a,b,c,k;
    
    scanf("%ld %ld %ld %ld",&a,&b,&c,&k);
    
    if(k <= a+b){
        printf("%ld\n",a);
    }else{
        minus = k-a-b;
        minus *= -1;
        printf("%ld\n",a+minus);
    }
    return 0;
}
