#include<stdio.h>
#include<math.h>
#ifdef DEBUG
#include<conio.h>
#endif // DEBUG


int main () {
#ifdef DEBUG
    freopen("input.txt", "r", stdin);
#endif // DEBUG

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int cnt = 0;
    for (size_t i = a; i <= b; i++)
    {
        if(0 == c % i) ++cnt;
    }
    printf("%d\n", cnt);
#ifdef DEBUG
    getch();
#endif // DEBUG
    return 0;
}


