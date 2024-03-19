#include<stdio.h>
#ifdef DEBUG
#include<conio.h>
#endif // DEBUG

int max_com_divisor(int a, int b) {
    while(a * b) {
        if(a > b) a %= b;
        else if(a < b) b %= a; 
        else return a;       
    }
    return a > b ? a : b;
}

int main () {
#ifdef DEBUG
    freopen("input.txt", "r", stdin);
#endif // DEBUG

    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", max_com_divisor(a, b));

#ifdef DEBUG
    getch();
#endif // DEBUG
    return 0;
}


