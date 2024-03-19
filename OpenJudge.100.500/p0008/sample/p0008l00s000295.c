#include <stdio.h>
int check_prime(int num);
int main(){
    int n, i, flag, count;
    while(scanf("%d", &n) != EOF){
        count = 0;
        for (i = 2; i <= n; ++i) {
            flag = check_prime(i);
            if(flag == 0)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}

int check_prime(int num){
    int j, flag = 0;
    for (j = 2; j <= num / 2; ++j) {
        if (num % j == 0) {
            flag = 1;
            break;
        }
    }
    return flag;
}