#include <stdio.h>

int main(){
    int a, b, c, d;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(b <= c || d <= a){
        printf("0\n");
        return 0;
    }

    if(a <= c){
        if(b <= d){
            printf("%d\n", b-c);
            return 0;
        }else{
            printf("%d\n", d-c);
            return 0;
        }
    }else{
        if(b <= d){
            printf("%d\n", b-a);
            return 0;
        }else{
            printf("%d\n", d-a);
            return 0;
        }
    }
}