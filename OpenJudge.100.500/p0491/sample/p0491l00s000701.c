#include <stdio.h>

int main(int argc, char *argv[]){
    unsigned long n,k,r;
    scanf("%lu %lu", &n,&k);
  
    if(n>k){
        r = n % k;
    }else{
        r = n;
    }

    if(r>k-r){
        printf("%lu",k-r);
    }else{
        printf("%lu",r);
    }
        


    return 0;
}