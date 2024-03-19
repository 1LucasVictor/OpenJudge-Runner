#include <stdio.h>

int main(){
    int a, b, c, d;
    
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if(a == b || b ==c || c == d){
        printf("Bad\n");
    }else if(a == b == c || b == c == d){
        printf("Bad\n");
    }else if(a == b == c == d){
        printf("Bad\n");
    }else{
        printf("Good\n");
    }
    return 0;
}
