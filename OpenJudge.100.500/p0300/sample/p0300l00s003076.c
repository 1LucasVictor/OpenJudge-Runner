#include <stdio.h>

int S[10001], T[501];

int search(int key, int n){

    int i = 0;

    T[n] = key;
    while(T[i] != key){
        i++;
    }

    if(i == n) return 0;
    else return 1;
}

int main() {

    int n, q;
    int i;
    int cnt = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &S[i]);
    }

    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        scanf("%d", &T[i]);
    }


    i = 0;

    while(i < n){
        if(search(S[i], q) == 1){
            cnt++;
        }
        i++;
    }
    printf("%d\n", cnt);

    return 0;
}