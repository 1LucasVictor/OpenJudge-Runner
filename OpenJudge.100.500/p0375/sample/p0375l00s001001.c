#include<stdio.h>
void call2(long int n){
    long int i, x;
    for(i=1;i<=n;i++){
        x = i;
        if(i % 3 == 0){
            printf(" %ld", i);
        }else {
            while(x != 0){
                if(x % 10 == 3) {printf(" %ld", i); break;}
                x /= 10;
            }
        }
    }
    printf("\n");
}
int main(){
    long int n;
    while(scanf("%ld", &n) == 1){
        call2(n);
    }
return 0;
}

