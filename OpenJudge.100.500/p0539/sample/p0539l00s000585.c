#include <stdio.h>

int main(void){
    int n;
    int flag = 0;
    scanf("%d", &n);
    for(int i = 1; i < 10; i++){
        for(int j = 1; j < 10; j++){
            if(i*j==n){
                flag = 1;
                goto out;
            }
        }
    }
out:
    if(flag) printf("Yes\n");
    else printf("No\n");
    return 0;
}