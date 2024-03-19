
#include<stdio.h>

int calc_gcd (int x,int y);


int main (void){

    int a, b;
    int gcd;
    int lcm;

    while(scanf("%d %d",&a ,&b) != EOF){

        if(a > b){
            gcd = calc_gcd(a, b);
        }else if(b > a){
            gcd = calc_gcd(b, a);
        }

        lcm = a / gcd * b;

        printf("%d %d",gcd ,lcm);
    }
    return 0;
}


int calc_gcd (a, b){

    int x, y, z;

    while(1){
            x = a;
            y = b;
            z = x % y;

            if(z != 0){
                a = y;
                b = z;
            }else if(z == 0){
                return y;
            }

    }

}