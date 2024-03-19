#include<stdio.h>
 
int main(){
    int train[10];
    int num = 0, i, n;

    while(scanf("%d", &n) != EOF){
        if(n == 0){
            num--;
            printf("%d\n", train[num]);
        } else {
            train[num] = n;
            num++;
        }
    }
    return 0;
}