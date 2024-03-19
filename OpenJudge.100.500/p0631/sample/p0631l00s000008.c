#include <stdio.h>

int main(){
    int a, b, x;
    scanf ("%d%d%d", &a, &b, &x);
    int dif;

    if (x >= a){
        dif = x-a;
    } else {
        dif = a-x;
    }
    
    if (a == x){
        printf ("YES\n");
    } else if (a < x && b >= dif){
        printf ("YES\n");
    } else {
        printf ("NO\n");
    } 
}
