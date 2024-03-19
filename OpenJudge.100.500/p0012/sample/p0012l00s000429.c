#include <stdio.h>
int data[100];
int sp = 0;

int empty() {
    return sp <= 0;
}


int top() {
    return data[sp-1];
}

void pop() {
    sp--;
}

void push(int v) {
    data[sp] = v;
    sp++;
}

int main() {
    int i, n = 1, k = 100, l = 0, idx = 0;
    int comand[k];
    int a[n];
    for(i = 0; i < k; i++) {
        if(i > 0) {
            if(empty()) break;
        }
        scanf("%d", &comand[i]);
        l++;
        if(comand[i] != 0) push(comand[i]);
        if(comand[i] == 0 && !empty()) {
            a[n -1] = top();
            n++;
            pop();
            idx++;
        }
    }
    k = l;
    for(i = 0; i < idx; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}