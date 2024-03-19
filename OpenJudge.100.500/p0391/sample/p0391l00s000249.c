#include<stdio.h>
#include<string.h>
void print(char str[1000]);
void reverse(char str[1000]);
void replace(char str[1000]);

int main(){
    char str[1000];
    int i, q, q0;
    char com[7];
    
    scanf("%s", str);
    scanf("%d", &q);
    q0 = q;
    for (i = 0; i < q; i++) {
        scanf("%s", com);
        if (strcmp(com, "print") == 0) {print(str);}
        else if (strcmp(com, "reverse") == 0) {reverse(str);}
        else if (strcmp(com, "replace") == 0) {replace(str);}
    }
}

void print (char str[1000]) {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i < b; i++){
        printf("%c", str[i]);
    }
    printf("%c\n", str[b]);
}

void reverse(char str[1000]) {
    int a, b;
    int i, j;
    char c;
    scanf("%d %d", &a, &b);
    for (i = a, j = b; i <= (a + b) / 2; i++, j--) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
}

void replace(char str[1000]) {
    int a, b;
    char p[1000];
    int i, j;
    scanf("%d %d %s", &a, &b, p);
    for (i = a, j = 0; i <= b; i++, j++) {
        str[i] = p[j];
    }
}

