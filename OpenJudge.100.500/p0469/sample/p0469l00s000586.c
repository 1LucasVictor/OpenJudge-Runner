#include <stdio.h>
int main(void){
    int n;
    int a, b, flag = 0;
    scanf("%d", &n);
    scanf("%d %d", &a, &b);
    for(int i = 0; i*n <= b; i++){
        if(a <= i*n) flag = 1;
    }
    if(flag == 1) printf("OK");
    else printf("NG");
    return 0;
}
