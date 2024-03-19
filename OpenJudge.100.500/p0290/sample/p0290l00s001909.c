#include <stdio.h>

//?´???°:1, ?????????:0
int is_prime(int number){
    int is = 1;
    for (int i=2; i <=number-1 ; i++){
        if(number%i==0){
            is = 0;
            break;
        }
    }
    return is; 
}

int main(void){
    int n, num;
    int i;
    int count = 0;
    
    scanf("%d", &n);
    for (i=0; i <= n-1; i++){
        scanf("%d", &num);
        //?´???°:1
        if (is_prime(num)==1){
            count++; 
        }
        //printf("num:%d\n",num);
        //printf("is_prime:%d\n",is_prime(num));
    } 

    printf("%d\n", count);
    return 0;
}