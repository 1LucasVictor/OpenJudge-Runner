#include <stdio.h>
#include <stdbool.h>

int main(void){
    int train, taxi, member, mul, min;
    while(true){
        scanf("%d" "%d" "%d", &member, &train, &taxi);
        if(0 <= member && member <= 20 && 0 < train && train < 50 && 0 < taxi && taxi < 50){
            break;
        }
    }
    
    mul = train * member; 
    if(mul < taxi){
        printf("%d\n", mul);
    }
    else if(mul >= taxi){
        printf("%d\n", taxi);
    }
}