#include<stdio.h>
#ifdef DEBUG
#include<conio.h>
#endif // DEBUG

int nums[105];

int main () {
#ifdef DEBUG
    freopen("input.txt", "r", stdin);
#endif // DEBUG

    int num;
    scanf("%d", &num);
    
    for (size_t i = 0; i < num; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = num - 1; i > 0; i--)
    {
        printf("%d ",nums[i]);
    }
    printf("%d\n",nums[0]);

#ifdef DEBUG
    getch();
#endif // DEBUG
    return 0;
}

