#include<stdio.h>

int main(){

    int L, R;
    scanf("%d%d", &L, &R);

    int ans;

    if(R - L >= 2018){
        ans = 0;
    }else{

        ans = 2019;

        long int pro;

        for (int i = L; i < R; i++){

            pro = i * (i + 1);
            if(pro % 2019 < ans){
                ans = pro % 2019;
            }

            //printf("%d %d", (i * (i + 1)) % 2019, ans);
        }
    }

    printf("%d", ans);
}