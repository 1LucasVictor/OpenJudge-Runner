#include<stdio.h>

int main(void) {
    int S[13] = {}, H[13] = {}, C[13] = {}, D[13] = {};
    int s[13] = {}, h[13] = {}, c[13] = {}, d[13] = {};
    int cs = 0, ch = 0, cc = 0, cd = 0;
    char a, e;
    int b, n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%c", &e);
            
        scanf("%c %d", &a, &b);
        
        if(a == 'S') {
            S[b - 1] = b;
        }
        else if(a == 'H') {
            H[b - 1] = b;
        }
        else if(a == 'C') {
            C[b - 1] = b;
        }
        else if(a == 'D') {
            D[b - 1] = b;
        }
    }

    for(i = 0; i < 13; i++) {
        if(S[i] != i + 1) {
            s[cs] = i + 1;
            cs++;
        }
        if(H[i] != i + 1) {
            h[ch] = i + 1;
            ch++;
        }
        if(C[i] != i + 1) {
            c[cc] = i + 1;
            cc++;
        }
        if(D[i] != i + 1) {
            d[cd] = i + 1;
            cd++;
        }
    }

    for(i = 0; i < cs; i++) {
        printf("S %d\n", s[i]);
    }
    for(i = 0; i < ch; i++) {
        printf("H %d\n", h[i]);
    }
    for(i = 0; i < cc; i++) {
        printf("C %d\n", c[i]);
    }
    for(i = 0; i < cd; i++) {
        printf("D %d\n", d[i]);
    }

    return 0;

}

