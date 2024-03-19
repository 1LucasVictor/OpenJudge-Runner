
#include<stdio.h>

int main (void){

    int prime[100000] = {1,1};
    int i, j;
    int m;
    int n;

    while(scanf("%d",&n) != EOF){

    int a = 0;

    for(i = 2; i < n; i++){
        for(j = 2; j > 1; j++){
            m = i * j;
            prime[m] = 1;
            if(i * j >= n)
                j = 0;
        }
    }

    for(i = 2; i <= n; i++){
        if(prime[i] == 0)
            a++;
    }

    printf("%d\n",a);

    }

    return 0;
}