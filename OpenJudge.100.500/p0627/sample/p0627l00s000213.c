#include <stdio.h>

int main(){
    int a, b;
    scanf ("%d%d", &a, &b);
    if (a == 0 && b == 0){
        printf ("0\n");
    }
    if ((a+b) >= (a-b) && (a+b) >= (a*b)){
        printf ("%d\n", a+b);
    } else if ((a-b) >= (a+b) && (a-b) >= (a*b)){
        printf ("%d\n", a-b);
    } else if ((a*b) >= (a+b) && (a*b ) >= (a-b)){
        printf ("%d\n", a*b);
    }
}