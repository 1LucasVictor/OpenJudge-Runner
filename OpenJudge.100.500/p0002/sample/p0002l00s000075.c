#include <stdio.h>

void judge_triangle(int side1, int side2, int side3);

int main(void)
{
    int number;
    scanf("%d", &number);
    int side1[number], side2[number], side3[number];
    for (int i = 0; i < number; i++) {
        scanf("%d %d %d", &side1[i], &side2[i], &side3[i]);
    }
    for (int i = 0; i < number; i++) {
        judge_triangle(side1[i], side2[i], side3[i]);
    }
    return 0;
}

void judge_triangle(int side1, int side2, int side3)
{
    int shorter1, shorter2, longest;
    if(side1 <= side2) {
        shorter1 = side1;
        shorter2 = side2;
    } else {
        shorter1 = side2;
        shorter2 = side1;
    }
    if(shorter2 <= side3) {
        longest = side3;
    } else {
        longest = shorter2;
        shorter2 = side3;
    }
    if (longest * longest == shorter1 * shorter1 + shorter2 * shorter2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return;
}