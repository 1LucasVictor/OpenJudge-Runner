#include<stdio.h>
int main(void){
    long long int a=0,b=0,c=0,i=0,d=0;
    long long int x,y;
    long long int e = 0;
    while(scanf("%lld%lld",&i,&a) != EOF){
        e=i*a;
        x = 0,y = 0;
        for(b=0;;b++){
            if(a > i){
                c = a;
                a = i;
                i = c;
            }
            if(i%a==0){
                printf("%lld %lld\n",a,e/a);
                break;
            }
            x = i%a;
            y = a;
            a = x;
            i = y;
        }
    }
    return 0;
}