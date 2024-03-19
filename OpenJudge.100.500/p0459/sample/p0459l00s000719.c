#include <stdio.h>

int main(){
    int animais, pernas, t, c;
    scanf("%d%d", &animais, &pernas);
    for(int i = 0; i <= animais; ++ i){
        if(i*2+(animais-i)*4 == pernas) {
            t = 1;
         	break;
        }
    }
    if (t)
        printf("Yes\n");
    else 
        printf("No\n");
    return 0;
}