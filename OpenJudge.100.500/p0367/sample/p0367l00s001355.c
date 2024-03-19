#include<stdio.h>

int main(void){
    int i, start, n, num, cnt = 0;
    scanf("%d %d %d", &start, &n, &num);
    for(i = start; i <= n; i++){
        if(num%i == 0){
            cnt++;
        }
    }
    printf("%d\n", cnt);
     
    return 0;
}
