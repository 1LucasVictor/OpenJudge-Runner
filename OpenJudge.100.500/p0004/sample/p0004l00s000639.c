#include<stdio.h>
#include<string.h>


int get_gcd(int x, int y){
    int r = 0;
    while ((r = x % y ) != 0){
        x = y;
        y = r;
    }
    return y;
}

int main(){

    int a, b, r= 0;
    int gcd, lcm = 0;

    while ( (fscanf(stdin, "%d %d", &a, &b)) != EOF){

        // ?????§??¬?´???°
        gcd = get_gcd(a, b);

        // ????°???¬?????°
        lcm =  b / gcd;
        lcm *= a;

        printf("%d %d\n", gcd, lcm);
    }

    return 0;
}