#include <stdio.h>

int main(){
    int n, train, taxi;

    scanf("%d %d %d", &n, &train, &taxi);
    if(n * train <= taxi){
        printf("%d\n", n * train);
    }
    else{
        printf("%d\n", taxi);  
    }
    return 0;

}