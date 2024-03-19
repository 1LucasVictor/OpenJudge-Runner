#include<stdio.h>

int main(){
    int d, n, ans;
    scanf("%d %d", &d, &n);

    if(d==0){
        ans = n;
    }else if(d==1){
        ans = n *100;
    }else{
        ans = n *10000;
    }

    printf("%d\n", ans);

    return 0;
}