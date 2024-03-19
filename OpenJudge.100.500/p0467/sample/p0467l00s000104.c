#include <stdio.h>

int main(void){
    long a,b,c,k;
    scanf("%ld %ld %ld %ld",&a,&b,&c,&k);
    if(a>=k){
        printf("%ld\n",k);
        return 0;
    }
    else if(a+b>=k){
        printf("%ld\n",a);
        return 0;
    }
    else{
        printf("%ld\n",a-(k-a-b));
        return 0;
    }


    return 0;
}
