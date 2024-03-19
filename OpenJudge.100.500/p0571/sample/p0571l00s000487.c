#include <stdio.h>
#include <stdbool.h>

int main(void){
    int train, taxi, member, mul, min;
    scanf("%d" "%d" "%d", &member, &train, &taxi);
    mul = train * member; 
    if(mul < taxi){
        printf("%d\n", mul);
    }
    else if(mul >= taxi){
        printf("%d\n", taxi);
    }
}