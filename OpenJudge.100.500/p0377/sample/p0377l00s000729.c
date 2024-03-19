#include <stdio.h>

void search(int n, char c, char s[], int x[]);

int main()
{
    int n;

    scanf("%d", &n);

    char st[n];
    int num[n], i;

    for (i = 0; i < n; i++) {
      scanf(" %c %d", &st[i], &num[i]);
    }

    search(n, 'S', st, num);
    search(n, 'H', st, num);
    search(n, 'C', st, num);
    search(n, 'D', st, num);

    return 0;
}

void search(int n, char c, char s[], int x[]) {
    int i, j, flag = 0;
    for (i = 1; i <= 13; i++) {
      flag = 0;
        for (j = 0; j < n; j++) {
            if (s[j] == c && x[j] == i) {
                flag = 1;
		break;
            }
        }
        if (flag == 0) {
            printf("%c %d\n", c, i);
        }
    }

    return ;
}