#include<stdio.h>

int main(void){
        int i, k, n;
        int max = -10000;
        int r[10000];

        scanf("%d", &n);
        for(i=0; i<n; i++){
                scanf("%d", &r[i]);
        }
        for(i=0; i<n; i++){
                for(k=0; k<i; k++){
                        if(max < r[i] - r[k]){
                                max = r[i] - r[k];
                        }
                }
        }
        printf("%d", max);
        return 0;
}