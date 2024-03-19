# include <stdio.h>

static const int ans[] = {
    0, 3, 14, 39, 84, 155, 258, 399, 584, 819, 1110
};

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", ans[a]);
    return 0;
}