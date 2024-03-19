#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]){
    long int a, b, i, j = 1, x, y;
    
    while(scanf("%ld %ld", &a, &b) != EOF){
        if(a >= b){
            i = b;
        }
        else{
            i = a;
        }
        //?????§??¬?´???°????±???????
        while(1){
            if(a % i == 0 && b % i == 0){
                break;
            }
            i--;
        }
        //????°???¬?????°????±???????
        x = i;
        while(1){
            y = i * j;
            if(y % a == 0 && y % b == 0){
                break;
            }
            j++;
        }
        
        printf("%ld %ld\n", x, y);
    }
    return 0;
}