#include <stdio.h>

int main(){
    int n = 0, awia = 100;
    
    scanf("%d", &n);
    while (--n >= 0){
        awia += awia * 0.05 + 0.9;
    }
    printf("%d\n", awia * 1000);
    return 0;
}