#include <stdio.h>

int main(){
    int n = 0, awia = 100000;
    
    scanf("%d", &n);
    while (--n >= 0){
        awia += awia * 0.05;
        if (awia % 1000)
            awia = (awia / 1000 * 1000) + 1000;
    }
    printf("%d\n", awia );
    return 0;
}