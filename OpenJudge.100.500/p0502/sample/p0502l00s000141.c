#include <stdio.h>

int main(void){

    int n, i, r1, r2, r, flag, a[1000];

    scanf(" %d\n", &n);

    for(i = 0; i < n ; i++){
        scanf(" %d", &a[i]);
        
        r = a[i]%2;
        r1 = a[i]%3;
        r2 = a[i]%5;

        if(r == 0){
            if(r1 == 0 || r2 == 0){
                flag = 1;
            }else {
                printf("DENIED\n");
                return 0;
            }
        
        }
    }

    if(flag == 1){
        printf("APPROVED\n");
    }else {
        printf("DENIED\n");
    }

    return 0;


}