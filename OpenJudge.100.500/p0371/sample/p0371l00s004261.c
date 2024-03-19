#include <stdio.h>

int main(){
    int n;
    int i;
    int min = 2147483647;
    int max = -2147483648;
    int sum = 0;
    int input;

    scanf("%d", &n);
    
    
    for (i = 0;i < n;i++){
        scanf("%d",  &input);
    
        if(input < min){
            min = input;
        }
    
        if(input > max){
            max = input;
        }
    
        sum += input;
    }
    
    printf("%d %d %d\n", min, max, sum);
    
    return 0;
}
