#include<stdio.h>
#ifdef DEBUG
#include<conio.h>
#endif // DEBUG

int main () {
#ifdef DEBUG
    freopen("input.txt", "r", stdin);
#endif // DEBUG

    int num;

    scanf("%d", &num);

    int minn;
    scanf("%d", &minn);
    int maxn = minn;
    long long sum = minn;

    int tmp;
    for (size_t i = 1; i < num; i++)
    {
        scanf("%d", &tmp);
        if(minn > tmp) minn = tmp;
        if(maxn < tmp) maxn = tmp;
        sum += tmp;
    }

    printf("%d %d %lld\n", minn, maxn, sum);

#ifdef DEBUG
    getch();
#endif // DEBUG
    return 0;
}


