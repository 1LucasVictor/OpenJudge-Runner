#include <stdio.h>

int main(int argc, char *argv[]){
    int a, ans;
    scanf("%d",&a); //aの値を定義

    ans = a + a*a + a*a*a;

    printf("%d\n", ans);

    return 0;
}
