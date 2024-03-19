#include <stdio.h>

int min(int a, int b){
    return (a < b ? a : b);
}

int main(){
    int L, R;
    scanf("%d%d", &L, &R);
    int ans = 2018;
    for(int i = L; i < min(R, L + 2018); i++){
        for(int j = i + 1; j <= min(R, L + 2018); j++)
            ans = min(ans, (i * j) % 2019);
    }
    printf("%d\n", ans);
}
