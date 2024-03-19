#include <stdio.h>
long int na,nb;
long int Min(long int a, long int b){
    if (a>b){
        return b;
    }else{
        return a;
    }
}
long int Max(long int a, long int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}
 
long int Yucurid(long int a,long int b){
    long int gcd,temp;
    gcd=Min(a,b);
    temp=(Max(a,b)-Min(a,b));
    if(gcd==temp){
        printf("%ld %ld\n",gcd,(na/gcd)*nb);
        return 0;
    }else{
        Yucurid(gcd,temp);
    }
}
 
int main(void) {
    na=8;
    nb=6;
    while(scanf("%ld %ld",&na,&nb)!=EOF){
        Yucurid(na,nb);
    }
        return 0;
}