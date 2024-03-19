#include<stdio.h>

int main(void){
        int i, k, n;
        int maxv, minv;
        int r[10000];

        scanf("%d", &n);
        for(i=0; i<n; i++){
                scanf("%d", &r[i]);
        }
        maxv = r[1] - r[0];
        minv = r[0];
        for(i=1; i<n-1; i++){
                if(maxv < (r[i] - minv)){
                        maxv = r[i] - minv;
                }else{
                        maxv = maxv;
                }
                if(minv < r[i]){
                        minv = minv;
                }else{
                        minv = r[i];
                }
        }
        printf("%d\n", maxv);
        return 0;
}