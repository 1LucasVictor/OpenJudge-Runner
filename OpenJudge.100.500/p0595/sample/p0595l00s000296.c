#include <stdio.h>
#include <stdlib.h>

int gcc(int a, int b){
    if(a<b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    int r = a % b;
    while(r!=0){
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main(){
    int a, b, j, k;
    int cc[100] = {0};
    scanf("%d %d %d", &a, &b, &k);
    int g = gcc(a, b);
    int i = g-1;
    j = 0;
    while(i >= 2){
        if(g % i == 0){
            cc[j] = i;
            j++;
        }
        i--;
    }
    int x = cc[k-2];
    printf("%d", x);
    return 0;
}