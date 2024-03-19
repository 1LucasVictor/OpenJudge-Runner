#include <stdio.h>

void replace(char *, char *, int ,int);
void reverse(char *, int, int);
void print(char *, int, int);

int main() {
    int i, q, a, b;
    char s[1001], p[1001], command[8];

    scanf("%s", s);
    scanf("%d", &q);

    for (i = 0; i < q; i++) {
        scanf("%s", command);
        scanf("%d%d", &a, &b);

        if (command[0] == 'p') {
            print(s, a, b);
        }
        else if (command[2] == 'p') {
            scanf("%s", p);
            replace(s, p, a, b);
        }
        else if (command[2] == 'v') {
            reverse(s, a, b);
        }
    }

    return 0;
}


void replace(char *s, char *p, int a, int b) {
    int i, n = 0;

    for (i = a; i <= b; i++) {
        s[i] = p[n];
        n++;
    }
}

void reverse(char *s, int a, int b) {
    int i, n = 0;
    char temp[1001];

    for (i = a; i <= b; i++, n++) {
        temp[n] = s[i];
    }

    n = 0;

    for (i = b; i >= a; i--) {
        s[i] = temp[n];
        n++;
    }
}

void print(char *s, int a, int b) {
    int i;

    for (i = a; i <= b; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
}

