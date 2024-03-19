#include<stdio.h>

int main(void){
    int a,b,c,tmp,tmp_a,tmp_b;
    while(scanf("%d%d", &a, &b)!=EOF){
        c = 1;
        if(b > a){tmp = a; a = b; b = tmp;}
        tmp_a = a;
        tmp_b = b;
        for(int i=2; i<=b; i++){
            while(tmp_b%i==0 && tmp_a%i==0){
                c = c*i;
                tmp_b = tmp_b / i;
                tmp_a = tmp_a / i;
            }
        }
        printf("%d %d\n", c, (a/c)*b);
    }
    return 0;
}

