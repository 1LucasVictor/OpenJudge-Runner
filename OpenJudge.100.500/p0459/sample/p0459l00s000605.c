#include <stdio.h>

int main(){
    int animais, pernas, t, c;
    scanf("%d%d", &animais, &pernas);
    for(int i = 0; i <= animais; ++ i){
        if(i*4+(animais-i)*2 == pernas) {
            t = 1;
        }
    }
    if (t)
        printf("Yes");
    else 
        printf("No");
    return 0;
}