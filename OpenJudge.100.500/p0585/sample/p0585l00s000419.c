#include<stdio.h>

int main(){
    double num[3];
    int numd[3];
    int i, ans2;
    double ans;

    for(i=0; i<3; i++){
        scanf("%d", &numd[i]);
        num[i] = (double)numd[i];
    }

    ans = (int)((numd[2]+0.5) / numd[0]) * numd[1];
    ans2 = (int)ans;

    printf("%d", ans2);
}