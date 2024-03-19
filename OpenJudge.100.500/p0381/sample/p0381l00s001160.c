#include<stdio.h>
#define MAX 10000

int main(){
    int n, x, i = 0, j, k, l;
    int count1 = 0;
    int count2[MAX] = {};
    while(1){
        scanf("%d %d", &n, &x);
        if(x == 0 && n == 0) break;
        for(j = 1; j <= n; j++){
            for(k = 1; k <= n; k++){
                for(l = 1; l <= n; l++){
                    if(j + k + l == x && j != k && j != l && k != l){
                        count1++;
                    }
                }
            }
        }
        count2[i] = count1 / 6;
        i++;
        count1 = 0;
    }
    j = 0;
    while(1){
        if(i == j) break;
        printf("%d\n", count2[j]);
        j++;
    }
    return 0;
}
