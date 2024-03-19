#include<stdio.h>

int main(int argc, char *argv[]){
    int a;
    int b;
    int t;
    int ans;
    scanf("%d %d %d",&a, &b, &t);
    ans = (t/a)*b; 
    printf("%d\n", ans);

    return 0;
}


