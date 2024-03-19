#include <stdio.h>

int main(void){
    int a,b;
    while(scanf("%d %d",&a,&b)==2){
        int reminder;
        int gcd;
        long lcm;
        int x=a,y=b;
        while(1){
            reminder=a%b;
            if(reminder==0) break;
            a=b;
            b=reminder;
        }
        gcd=b;
        lcm=(x/gcd)*(y/gcd)*gcd;
        printf("%d %ld\n",gcd,lcm);
    }
    return 0;
}
