#include <stdio.h>
int main(void){
    int H, A, s;
    
    scanf("%d %d", &H, &A);
    
    if(H%A == 0){
        s = H / A;
    } else {
        s = H / A + 1;
    }
    printf("%d", s);
}
