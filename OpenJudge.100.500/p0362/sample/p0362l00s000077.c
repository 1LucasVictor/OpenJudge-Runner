#include <stdio.h>

int main() {
    int a,b,c=0;
    scanf("%d %d %d", &a,&b,&c);
    
    if(a >= b){
        printf("No\n");
        return 0;
    }
    else if (b < c){
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;    
}
