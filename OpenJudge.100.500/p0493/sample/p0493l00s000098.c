#include <stdio.h>

int main()
{
    int yen, feliz = 0;
    scanf("%d", &yen);
    
    while (yen >= 5) {
        if (yen >= 500){
            yen = yen - 500;
            feliz = feliz + 1000;
        }
        else{
            yen = yen - 5;
            feliz = feliz + 5;
        }
    }
    printf("%d", feliz);
    return 0;
}