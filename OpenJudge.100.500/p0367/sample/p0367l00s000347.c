#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    
    int counter,divisor_num = 0;
    for(counter = a; counter <= b; counter++){
        if(c%counter == 0) divisor_num++;
    }
    printf("%d\n", divisor_num);
}

