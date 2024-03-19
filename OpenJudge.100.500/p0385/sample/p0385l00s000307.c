#include <stdio.h>
int main(void){
    int num,a;
    while(scanf("%d", &num)!=EOF && num!=0){
        int sum = 0;
        while(num>0){
            a = num % 10;
            sum = sum + a;
            num = num / 10;
            }
            printf("%d\n", sum);
            
    }
    return 0;
    
}
